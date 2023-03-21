class Solution {
public:

    int checkzeros(int s,int e,vector<int>nums)
    {
        for(int i=s;i<=e;i++)
        {
            if(nums[i]!=0)
            return 0;
        }
        return 1;
    }


    long long zeroFilledSubarray(vector<int>& nums) {
        if(nums.size()==1&&nums[0]==0)return 1;
        long long int count=0;
        int flag=0;int n=nums.size();
      for(int k=1;k<=n;k++)
       {
          int i=0,j=0;
          while(j<nums.size())
          {
              if(j-i+1<k)
              {
                  j++;
              }

              else if(j-i+1==k)
              {
                  if(checkzeros(i,j,nums))
                  {
                      
                  }
                  i++;
                  j++;
              }
          }
          if(flag==0)
          if(count==nums.size())
          {
              flag=1;
              return ((n*(n+1))/2);
          }
        }

        return count;  
    }
};
