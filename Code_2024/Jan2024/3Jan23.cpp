2980. Check if Bitwise OR Has Trailing Zeros
class Solution {
public:
    bool hasTrailingZeros(vector<int>& nums) {
        int count=0;
        for(auto it:nums)
        {
            if(it%2==0)count++;
            if(count>=2)return true;
        }
        return false;
    }
};
