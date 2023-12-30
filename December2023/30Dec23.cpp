1897. Redistribute Characters to Make All Strings Equal
class Solution {
public:
    bool makeEqual(vector<string>& words) {
      int n=words.size();
      unordered_map<char,int>mp;

      for(auto it:words)
      {
          for(auto i:it)
          {
              mp[i]++;//keeping count of each character
          }
      }  

      for(auto it:mp)
      {
          if(it.second%n!=0)
          //checking if no of character is divided by size of words==true else false
          return false;
      }
      return true;
    }
};
