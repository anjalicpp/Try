1823. Find the Winner of the Circular Game
Medium

class Solution {
public:

    void solve(vector<int>&v,int k,int index,int &ans)
    {
        if(v.size()==1)
        {
            ans=v[0];
            return;
        
        }

        index=(index+k)%(v.size());
        v.erase(v.begin()+index);
        solve(v,k,index,ans);
    return;
    }
    int findTheWinner(int n, int k) {
        if(n==1)return n;
        vector<int>v;
        for(int i=1;i<=n;i++)
        {
            v.push_back(i);
        }
        int ans;
        k=k-1;
        int index=0;
        solve(v,k,index,ans);
        return ans;
    }
};
