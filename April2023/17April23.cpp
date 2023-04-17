1431. Kids With the Greatest Number of Candies
Easy
class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
      
        
        vector<bool> res;int max=0;
        for(auto i:candies)
        {
            max=(i>max)?i:max;
        }
        
        for(int i=0;i<candies.size();i++)
        {
            ((candies[i]+extraCandies)>=max)?res.push_back(true):res.push_back(false);
        }
        return res;
        
    }
};




class Solution {
public:
    int sumOddLengthSubarrays(vector<int>& arr) {
        int n=arr.size();
        int ans=0;
      for(int i=0;i<n;i++)
		{
            int contribution = ceil((i+1)*(n-i)/2.0);
            ans+=(contribution*arr[i]);
        }
        return ans;  
    }
};
