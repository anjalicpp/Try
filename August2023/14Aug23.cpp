215. Kth Largest Element in an Array

Given an integer array nums and an integer k, return the kth largest element in the array.
Note that it is the kth largest element in the sorted order, not the kth distinct element.
Can you solve it without sorting?
  
class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        priority_queue<int,vector<int>,greater<int>>mh;
        for(int i=0;i<nums.size();i++)
        {
            mh.push(nums[i]);
            if(mh.size()>k)
            {
                mh.pop();
            }
        }
        return mh.top();
    }

};
