class Solution {
public:
int binarysearch(vector<int>nums,int start,int end,int target)
{
    int mid=start+(end-start)/2;
    while(start<=end)
    {
        if(nums[mid]==target)
        {
            return mid;
        }
    
        else if(nums[mid]<target)
        {
            start=mid+1;
        }

        else{
            end=mid-1;
        }

        mid=start+(end-start)/2;
    }
    return -1;
}

int searchpivot(vector<int>nums)
{
    int start=0,end=nums.size()-1;
    int n=nums.size();
    int mid=start+(end-start)/2;
    while(start<=end)
    {
        int prev=(mid+n-1)%n;
        int next=(mid+1)%n;
        if(nums[mid]<prev&&nums[mid]<next)
        {
            return mid;
        }
        else if(nums[start]<=nums[mid])
        {
            start=mid+1;
        }
        else{
            end=mid-1;
        }
         mid=start+(end-start)/2;

        
    }

    return -1;
}
    
    int search(vector<int>& nums, int target) {
     int index=searchpivot(nums);
     int start=0,end=nums.size()-1;
     int ans=-1;

     ans=binarysearch(nums,start,index-1,target);
       if(ans==-1)
        ans=binarysearch(nums,index,end,target);
      return ans;
    }
};
