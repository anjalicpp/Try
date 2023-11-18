1838. Frequency of the Most Frequent Element

Nice Problem on SW
medium=120

class Solution {
public:
    int maxFrequency(vector<int>& nums, int k) {
      //Favourite SW Solution
    sort(nums.begin(),nums.end());

   long int ans=0;
   long int total=0;
   long int right=0;
   long int left=0;

    //condition curr_no*window size=totalsum till curr_no+k

    while(right<nums.size())
    {
        total+=nums[right];

        while(nums[right]*(right-left+1)-total>k)
        {
            total=total-nums[left];
            left++;
        }
        
        ans=max(ans,(right-left+1));
        right++;
    }
    return ans;
    }
};
