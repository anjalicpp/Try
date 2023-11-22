
class Solution {
public:
    int rev_num(int num)
    {
        int rev=0;
        int rem=0;
        while(num)
        {
            rem=num%10;
            rev=rev*10+rem;
            num=num/10;
        }
        return rev;
    }

    int countNicePairs(vector<int>& nums) {

      map<int,int>mp;
      int count=0;

      for(int i=0;i<nums.size();i++)
      {
          nums[i]=nums[i]-rev_num(nums[i]);
          //made condition better by rearranging:nums[i]-rev(nums[i])==nums[j]-rev(nums[j])
          if(mp.find(nums[i])!=mp.end())
          {
            //if found in map then increasing counter before adding to map
             count+=mp[nums[i]];
             count=count%1000000007;
          }
          mp[nums[i]]++;
       } 
    
     return count%1000000007;
    }
};
