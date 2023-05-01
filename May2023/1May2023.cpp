class Solution {
public:
    double average(vector<int>& salary) {
        sort(salary.begin(),salary.end());
        double ans=0;
        int size=salary.size()-2;
        for(int i=1;i<=size;i++)
        {
            ans+=salary[i];
        }
        return ans/size; 
    }
};

1492. The kth Factor of n
Medium

class Solution {
public:
    int kthFactor(int n, int k) {
        vector<int>v;
        for(int i=1;i<=n;i++)
        {
            if(n%i==0)
            v.push_back(i);

        }
        if(k>v.size())return -1;
        return v[k-1];
    }
};
