class Solution {
public:
    vector<int> findIndices(vector<int>& nums, int indexDifference, int valueDifference) {
     if(nums.size()==1&&indexDifference==0&&valueDifference==0) return{0,0};
     
      vector<int>ans;
      int n=nums.size();
      
       for(int i=0;i<n;i++)
       {
           for(int j=i+1;j<n;j++)
           {
               if(abs(i-j)>=indexDifference)
               {
                   if(abs(nums[i]-nums[j])>=valueDifference)
                   {
                       ans.push_back(i);
                       ans.push_back(j);
                   }
               }
           }
       } 

       if(ans.size()==0) return{-1,-1};
       return ans;
    }
};
