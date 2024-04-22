6. Zigzag Conversion
class Solution {
public:
    string convert(string s, int numRows) {

        if(numRows==1||numRows>=s.length())
        {
            return s;
        }
      int direction=1;
      int index=0;
      vector<vector<char>> grid(numRows);

      for(char c:s)
      {
        grid[index].push_back(c);
        if(index==0){
            direction=1;//from up to down case
        }
        else if(index==numRows-1)
        {
            direction=-1;//down to up case
        }
        index+=direction;
      }

      string ans;
      for(auto it:grid)
      {
        for(auto c:it)
        {
            ans+=c;
        }
      }
      return ans;

    }
};
