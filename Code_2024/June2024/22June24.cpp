class Solution {
public:
    int numberOfSubarrays(vector<int>& nums, int k) {
        int n=nums.size();
        int i=0,j=0;
        int odd=0,count=0;


        while(j<n)
        {
            if(nums[j]%2!=0)
            {
                odd++;
            }
            if(odd==k)count++;
            else if(odd>=k)
            {
                
                    while(odd>=k)
                    {
                        if(nums[i]%2!=0)
                        {
                            i++;
                            odd--;
                            if(odd==k)count++;
                        }
                        else{
                            i++;
                        if(odd==k)count++;
                        }
                    }
                

            }
            j++;
        }
        return count;
    }
};
