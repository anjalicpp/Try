class Solution {
public:
   /* bool check(int index,vector<int>& nums,int num)
    {
        for(int i=index;i<nums.size();i++)
        {
            if(nums[index]==num)return true;
        }
       return false; 
    }*/
    //map approach
    int findDuplicate(vector<int>& nums) {
       map<int, int> m;
        int duplicate = 0;
        for(auto i= 0; i<nums.size(); ++i)
        ++m[nums[i]];
        
        for(auto i : m)
        {
            if(i.second > 1)
            {
                duplicate = i.first;
                break;
            }
        }
        return duplicate;
    }
};
