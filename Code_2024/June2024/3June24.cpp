
class Solution {
public:
   /*void solve(int i,int n,vector<int> output,vector<vector<int>>&ans,int k)
    {
        if(i>n)
        {
          if(output.size()==k) 
            
            ans.push_back(output);
            
            return;
        }
        
        //include
    
        output.push_back(i);
        solve(i+1,n,output,ans,k);
        
       output.pop_back();
        
        
        //exclude
       
       solve(i+1,n,output,ans,k);
       
        
    
        
    }
    
    vector<vector<int>> combine(int n, int k) {
       vector<vector<int>> ans;
        vector<int> output;
       
        
     
        solve(1,n,output,ans,k);
        return ans;*/
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
