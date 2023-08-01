77. Combinations

Given two integers n and k, return all possible combinations of k numbers chosen from the range [1, n].

You may return the answer in any order.

 
    vector<vector<int>>v;
    vector<int>temp;
    void combi(vector<int>&a,int n,int i,int k)
    {
        if(i>=n )
        {
            if(temp.size()==k) v.push_back(temp); 
            return ;
        }
        temp.push_back(a[i]); //pick element 
        combi(a,n,i+1,k);
        temp.pop_back();
         //not pick 
        combi(a,n,i+1,k);
    }
    vector<vector<int>> combine(int n, int k) {
        int i,j;
        vector<int>a;
        for(i=0;i<n;i++) a.push_back(i+1);
        combi(a,n,0,k);
        return v;
        
    }
};
