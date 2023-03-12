
153. Find Minimum in Rotated Sorted Array
class Solution {
public:
    int findMin(vector<int>& nums) {
            if(nums.size()==1)return nums[0];

        int start=0,end=nums.size()-1, mid=start+(end-start)/2;
        int n=nums.size();
        while(start<=end)
        {
           // mid=start+(end-start)/2;
            
            int next=(mid+1)%n;
            int prev=(mid+n-1)%n;
            if(nums[mid]<nums[next]&&nums[mid]<nums[prev])
            {
                return nums[mid];
            }
             else if(nums[mid]<nums[end])
            {
                //start=mid+1;

                end=mid-1;
            }
            else //if(nums[start]<nums[mid])
            {
                  //end=mid-1;
                start=mid+1;
            }

            
          mid=start+(end-start)/2;
        }
        return -1;
        
        
       
       
    }
};
