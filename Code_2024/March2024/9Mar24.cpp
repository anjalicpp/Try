
2540. Minimum Common Value
class Solution {
public:
    int getCommon(vector<int>& nums1, vector<int>& nums2) {
       // vector<int>ans;
        map<int,int>mp;
        for(int i=0;i<nums1.size();i++)
        {
            mp[nums1[i]]++;
        }
        for(int j=0;j<nums2.size();j++)
        {
            if(mp.find(nums2[j])!=mp.end())
            {
                return nums2[j];
            }
        }
      return -1;
    }
};
