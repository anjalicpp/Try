448. Find All Numbers Disappeared in an Array
Easy

class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        map<int,int>mp;
        vector<int> ans;
        for(auto it:nums)
        {
            mp[it]++;
        }

        for(int i=1;i<=nums.size();i++)
        {
            if(mp.find(i)==mp.end())
            {
                ans.push_back(i);
            }
        }
        return ans;
    }
};

442. Find All Duplicates in an Array
Medium


class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
     sort(nums.begin(),nums.end());
     vector<int>ans;
    int k=2;
      int i=0,j=0;
      while(j<nums.size())
      {
          if(j-i+1<k)
          {
              j++;
          }
          else if(j-i+1==k)
          {
              if(nums[i]==nums[j])
              ans.push_back(nums[i]);
              i++;j++;
          }
      }
      return ans;  
    }
};



class Solution {
public:
int duplicate(int i,int j,vector<int>nums)
{
    map<int,int>mp;
    int k=j-i+1;
    for(int x=i;x<=j;x++)
    {
        mp[nums[x]]++;
    }
    if(mp.size()==k)return 1;
    return 0;
   
}

    long long maximumSubarraySum(vector<int>& arr, int k)
    {
     long long int sum=0;
     long long int maxi=0;
     int i=0;
     int j=0;
     int size=arr.size();
     while(j<size)
     {
         sum=sum+arr[j];

         if(j-i+1<k)
         {
             j++;
         }
         else if(j-i+1==k)
         {
             if(duplicate(i,j,arr))
             {
                 maxi=max(sum,maxi);
             }
             sum=sum-arr[i];
             i++;
             j++;
         }
     }
     return maxi;

    }
};
