class Solution {
public:
    vector<int> findWordsContaining(vector<string>& words, char x) {
      vector<int> ans;
      

      /*for(int i=0;i<words.size();i++)
      {
          for(int j=0;j<words[i].length();j++)
          {
              if(words[i][j]==x)
              {
                 ans.push_back(i);
                 break; 
              }
            
          }
        
      } 
      return ans; */
-------------------------------------------------------------------------
      int count=0;
      for(auto st:words)
      {
          for(auto it:st)
          {
              if(it==x)
              {
                  ans.push_back(count);break;
              }
          }
          count++;
      }
      return ans;
    }
};
