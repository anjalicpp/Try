class Solution {
public:
   
    bool buddyStrings(string s, string goal) {

      if(s.length()!=goal.length())return false;
      vector<int>index;
      
      for(int i=0;i<goal.length();i++)
      {
          if(s[i]!=goal[i])
          {
              index.push_back(i);
          }
      } 
      if(index.size()==0)//index size()==0case
        {
         map<char,int>mp1;
         for(auto i:s)
        {
          mp1[i]++;
          if(mp1[i]>1)return true;
        }
        return false;
        }
      
      else  if(index.size()==2){//index size()==2
          char temp=s[index[0]];
          s[index[0]]=s[index[1]];
          s[index[1]]=temp;
      } 
      if(s.compare(goal)==0)return true;
      return false;//index size()!=2
      
    }
};

Intuition
If you pass all testcases in the first go, you must either be a freak or a cheat.
Well doesn't matter, lemme explain my own thought process:

Count number of instances where s[i]!=goal[i]
Each time s[i]!=goal[i], store both unequal characters
(Eg: ab & ba), then you'll first store {a,b} and then {b,a}
After doing this, you have 3 cases:

If instances≠2instances ≠ 2instances

=2 then return false
If instances=2instances = 2instances=2, check if:
If instances=0instances = 0instances=0, like in case of s="aa" and goal="aa",
-> In this case, strings are same, if there is a character with frequency more than 1 (has duplicates), you can exchange the duplicates to get the same exact string!
