class Solution {
public:
    long long maximumHappinessSum(vector<int>& happiness, int k) {
       sort(happiness.begin(),happiness.end());
       int n=happiness.size();
       long long ans=0;
       int del=0;
       while(k>0)
       {
        if(happiness[n-1]-del<0)
            ans+=0;
        else
         {   
        ans+=happiness[n-1]-del;
       
        del++;
         }
        k--;
        n--;
       }
    return ans;
    }
};
