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
