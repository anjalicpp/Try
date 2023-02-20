class Solution {
public:

        int bsearch(vector<int>& nums, int target)
        {
            int start=0,end=nums.size()-1;
           // int ans=0;
            int mid=(start+end)/2;
            while(start<=end)
            {
                if(nums[mid]==target)
                {
                    return mid;
                }
                if(nums[mid]>target)
                {
                    end=mid-1;
                }
                else start=mid+1;
                 mid=(start+end)/2;
            }
            return start;
        }
    int searchInsert(vector<int>& nums, int target) {
      return bsearch(nums,target);  
    }
};
/*meri logic:
log(n)-->binary search lga skti hu.*/
