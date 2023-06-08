class Solution {
public:
    int countNegatives(vector<vector<int>>& grid) {
        int count=0;
       for(auto i :grid)
       for(auto j:i)
       if(j<0)count++;
       return count; 
    }
};



class Solution {
public:
    int maximumCount(vector<int>& nums) {
        int countn=0;
        int countp=0;

        for(auto i:nums)
        
        {
            if(i<0)countn++;
            else if(i>0)countp++;
        }
        int maxi= max(countn,countp);
        return maxi;
    }
};
