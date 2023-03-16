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

//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;


// } Driver Code Ends
class Solution{
    public:
    
    void solve(int n,int from,int to,int aux,long long int &count)
    {
        if(n==1)
        {
            cout<<"move disk "<<n<<" from rod "<< from<<" to rod "<<to<<endl;
            count=count+1;
            return;
        }
        
        solve(n-1,from,aux,to,count);
        cout<<"move disk "<<n<<" from rod "<<from<<" to rod "<<to<<endl;
        count=count+1;
        solve(n-1,aux,to,from,count);
        
    }
    // You need to complete this function

    // avoid space at the starting of the string in "move disk....."
    long long toh(int n, int from, int to, int aux) {
        // Your code here
        long long int count=0;
        solve(n,from,to,aux,count);
        return count;
        
    }

};

//{ Driver Code Starts.

int main() {

    int T;
    cin >> T;//testcases
    while (T--) {
        
        int N;
        cin >> N;//taking input N
        
        //calling toh() function
        Solution ob;
        
        cout << ob.toh(N, 1, 3, 2) << endl;
    }
    return 0;
}


//Position this line where user code will be pasted.
// } Driver Code Ends
