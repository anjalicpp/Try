class Solution {
public:
    vector<vector<int>> findDifference(vector<int>& nums1, vector<int>& nums2) {
        map<int,int>mp;
        vector<vector<int>> answ;
        vector<int>ans;
        for(int i=0;i<nums1.size();i++)
        {
            mp[nums1[i]]++;
        }
        for(int i=0;i<nums2.size();i++)
        {
            if(mp.find(nums2[i])!=mp.end())
            mp[nums2[i]]=0;
        }
        for(auto it:mp)
        {
            if(it.second!=0)
            ans.push_back(it.first);
        }

        answ.push_back(ans);

        map<int,int>mp2;
         vector<int>ans2;
        for(int i=0;i<nums2.size();i++)
        {
            mp2[nums2[i]]++;
        }
        for(int i=0;i<nums1.size();i++)
        {
            if(mp2.find(nums1[i])!=mp2.end())
            mp2[nums1[i]]=0;
        }
        for(auto it:mp2)
        {
            if(it.second!=0)
            ans2.push_back(it.first);
        }
        answ.push_back(ans2);
        return answ;
    }
};

2215. Find the Difference of Two Arrays
Easy

class Solution {
public:
    vector<vector<int>> findDifference(vector<int>& nums1, vector<int>& nums2) {
        map<int,int>mp;
        vector<vector<int>> answ;
        vector<int>ans;
        for(int i=0;i<nums1.size();i++)
        {
            mp[nums1[i]]++;
        }
        for(int i=0;i<nums2.size();i++)
        {
            if(mp.find(nums2[i])!=mp.end())
            mp[nums2[i]]=0;
        }
        for(auto it:mp)
        {
            if(it.second!=0)
            ans.push_back(it.first);
        }

        answ.push_back(ans);

        map<int,int>mp2;
         vector<int>ans2;
        for(int i=0;i<nums2.size();i++)
        {
            mp2[nums2[i]]++;
        }
        for(int i=0;i<nums1.size();i++)
        {
            if(mp2.find(nums1[i])!=mp2.end())
            mp2[nums1[i]]=0;
        }
        for(auto it:mp2)
        {
            if(it.second!=0)
            ans2.push_back(it.first);
        }
        answ.push_back(ans2);
        return answ;
    }
};
