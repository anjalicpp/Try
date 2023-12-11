1287. Element Appearing More Than 25% In Sorted Array

class Solution {
public:
    int findSpecialInteger(vector<int>& arr) {
       int times=0.25*arr.size();
       map<int,int>mp;

      for(int i=0;i<arr.size();i++)
      {
          mp[arr[i]]++;
          if(mp[arr[i]]>times)
          return arr[i];
      }
       return 0;
    }
};
