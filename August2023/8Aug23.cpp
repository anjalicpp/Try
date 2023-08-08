  int getpivot(vector<int>& arr)
    {
        int s=0;int e=arr.size()-1;
        int mid=s+(e-s)/2;
        while(s<e)
        {
            if(arr[mid]>=arr[0])
            {
                s=mid+1;
                
            }
            else
            {
            e=mid;    
            }
            mid=s+(e-s)/2;
        }
            
            return s;
    }
        
        int binarysearch(vector<int>& arr,int s,int e,int target) {
           
            int ans=-1;
            int mid=s+(e-s)/2;
            while(s<=e)
            {
               if(arr[mid]==target)
               {
                   return mid;
               }
                if(arr[mid]>target)
                {
                    e=mid-1;
                }
                else s=mid+1;
                mid=s+(e-s)/2;
            }
           return ans;                  
         }                
                         
                         
        
    
    int search(vector<int>& nums, int target) {
       //search for pivot 
        //search the part
        //search in that part
        int low=0,high=nums.size()-1;int ans;
        
        int pivotindex=getpivot(nums);
       // int pivot=nums[pivotindex];
        if(target>=nums[pivotindex]&&target<=nums[high])//search part
        {
          ans= binarysearch( nums,pivotindex,high,target);
            
        }
        else
        {
            ans=binarysearch( nums,low,pivotindex-1,target);
             
        }
        return ans;
        //return pivot;
