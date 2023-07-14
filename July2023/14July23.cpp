
1218. Longest Arithmetic Subsequence of Given Difference
s
Given an integer array arr and an integer difference, return the length of the longest subsequence in arr which is an arithmetic sequence such that the difference between adjacent elements in the subsequence equals difference.

A subsequence is a sequence that can be derived from arr by deleting some or no elements without changing the order of the remaining elements.

 class Solution {
public:
    int longestSubsequence(vector<int>& arr, int difference) {
        int i=0;
        int j=0;
        int ans=0;
        while(j<arr.size())
        {
            if(arr[j]!=arr[j-1]+difference)
            {
                ans=max(ans,j-i);
                i=j;
                
            }
             ans=max(ans,j-i);
            j++;
        }
        //ans=max(ans,j-i);
        

        return ans;
    }
};
