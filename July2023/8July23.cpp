/*
/*APPROACH BLOCK
  while(j<answerKey.length())
    {
        if(answerKey[j]=='T')t++;
        else f++;

        while(t>k&&f>k)
        {
            if(answerKey[i]=='T')
            t--;
            else f--;
            i++;
        }
        maxi=max(maxi,j-i+1);
        j++;
    }
    return maxi;
*/

*/

485. Max Consecutive Ones
Easy


class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int i=0,j=0;
        int zero=0,ones=0,maxi=0;
        while(j<nums.size())
        {
            
            if(nums[j]==0)zero++;
            ones++;
            
            while(zero>0)
            {
                if(nums[i]==0)zero--;
                else ones--;
                i++;
            }
            maxi=max(maxi,j-i+1);
            j++;
        }
        return maxi;
    }
};
----------------------------------------------------------------------------------------------------------------------------------------------------------
1004. Max Consecutive Ones III
Medium
6.9K
73
Companies
Given a binary array nums and an integer k, return the maximum number of consecutive 1's in the array if you can flip at most k 0's.
    class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int i=0;
        int j=0;
        int maxi=0;
        int ones=0;
        int zeros=0;

        while(j<nums.size())
        {
            if(nums[j]==0)zeros++;
            else ones++;
            while(zeros>k)
            {
                if(nums[i]==0)zeros--;
                else ones--;
                i++;
            }
            maxi=max(maxi,j-i+1);
            j++;
        }
        return maxi;
    }
};
**************************************************
  2461. Maximum Sum of Distinct Subarrays With Length K
Medium
841
11
Companies
You are given an integer array nums and an integer k. Find the maximum subarray sum of all the subarrays of nums that meet the following conditions:

The length of the subarray is k, and
All the elements of the subarray are distinct.
Return the maximum subarray sum of all the subarrays that meet the conditions. If no subarray meets the conditions, return 0.

A subarray is a contiguous non-empty sequence of elements within an array.

 
class Solution {
public:

    long long maximumSubarraySum(vector<int>& arr, int k)
    {
     long long int sum=0;
     long long int maxi=0;
     int i=0;
     int j=0;
     map<int,int>mp;

     int size=arr.size();
     while(j<size)
     {
         mp[arr[j]]++;
         sum+=arr[j];
         if(j-i+1==k)
         {
             if(mp.size()==k)
            {
                 maxi=max(maxi,sum);
            }

             sum=sum-arr[i];
             if(mp[arr[i]]==1)
             mp.erase(arr[i]);
             else mp[arr[i]]--;
             i++;
             
         }
          j++;
     }
     return maxi;

    }
};
