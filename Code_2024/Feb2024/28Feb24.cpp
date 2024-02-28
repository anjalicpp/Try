class Solution {
public:
    bool subsetsum(vector<int>arr,long int sum,int n)
    {
        bool t[n+1][sum+1];
        //table initialse
        for(int i=0;i<n+1;i++)
        {
            for(int j=0;j<sum+1;j++)
            {
                if(i==0)
                t[i][j]=false;

                if(j==0)
                {
                    t[i][j]=true;
                }
            }
        }
        t[0][0]=true;

        //subproblems
        for(int i=1;i<n+1;i++)
        {
            for(int j=1;j<sum+1;j++)
            {
                if(arr[i-1]<=j)
                {
                    t[i][j]=(t[i-1][j-arr[i-1]]||t[i][j]);
                }
                else
                {
                    t[i][j]=t[i-1][j];
                }
            }
        }
return t[n][sum];
    }
    bool canPartition(vector<int>& nums) {
        int n=nums.size();
        long int sum=0;
        for(int i=0;i<n;i++)
        {
            sum+=nums[i];
        }
        if(sum%2!=0)
        {
            return false;
        }
        else return subsetsum(nums,sum/2,n);
    }
};
