class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& nums) {
     /* vector<int>odd;
      vector<int>even;
      for(auto it:nums)
      {
          if(it%2==0)
          even.push_back(it);
          else odd.push_back(it);
      }  

      vector<int>ans;
      for(auto i:even)
      {
          ans.push_back(i);

      }

      for(auto i:odd)
      {
          ans.push_back(i);

      }

    return ans;*/

    int left=0;
    for(int i=0;i<nums.size();i++)
    {
        if(nums[i]%2==0)
        {
            swap(nums[left],nums[i]);
            left++;
        }
    }
    return nums;
    }
};
