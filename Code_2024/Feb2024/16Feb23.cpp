class Solution {
public:
    int findLeastNumOfUniqueInts(vector<int>& arr, int k) {
      map<int,int>mp;

      for(auto it:arr)
      {
          mp[it]++;//eeping cout of frequency
      } 

      vector<int>freq;
      for(auto it:mp)
      {
          freq.push_back(it.second);

      } 
      sort(freq.begin(),freq.end());

      int count=0;
      for(auto i:freq)
      {
          if(k>=i)
          {
              k=k-i;count++;
          }
          else {
              break;//we cannot let k be negative
          }
      }
      return freq.size()-count;
    }
};
