1561. Maximum Number of Coins You Can Get

class Solution {
public:
    int maxCoins(vector<int>& piles) {
      sort(piles.begin(),piles.end());
      //for optimal solution bob should get least in every arrangment
      //it means bob will get first piles/3 numbers
      //bob will get [0--(piles/3-1)]
      int n=piles.size()/3;
      int ans=0;
      for(int i=n;i<piles.size();i+=2)
      {
          ans+=piles[i];
      }
    return ans;
    }
};
