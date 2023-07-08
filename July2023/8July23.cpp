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
