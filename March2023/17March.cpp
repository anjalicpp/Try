739. Daily Temperatures
Medium


class Solution {
public:
    void solve(vector<int> &v,int n,vector<int> &arr)
    {
        stack<pair<int,int>> s;

        for(int i=n-1;i>=0;i--)
        {
            if(s.size()==0)
            {
                v.push_back(-1);
            }
            else if(s.size()>0&&s.top().first>arr[i])
            {
                v.push_back(s.top().second);
            }
            else if(s.size()>0&&s.top().first<=arr[i])
            {
                while(s.size()>0&&s.top().first<=arr[i])
                {
                    s.pop();
                }
                if(s.size()==0)
                {
                    v.push_back(-1);
                }
                else v.push_back(s.top().second);
            }
            s.push({arr[i],i});
        }

        reverse(v.begin(),v.end());

        for(int i=0;i<n;i++)
        {
            if(v[i]==-1)
            v[i]=0;
            else
            v[i]=v[i]-i;
        }

    
    }
    vector<int> dailyTemperatures(vector<int>& temperatures) {
      vector<int> ans;
      int n=temperatures.size();
      solve(ans,n,temperatures);
      return ans;  
    }
};


//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends


class Solution
{
    public:
    //Function to calculate the span of stockâ€™s price for all n days.
    
    void solve(vector<int>&ans,int n,int arr[])
    {
        stack<pair<int,int>>s;
        for(int i=0;i<n;i++)
        {
            if(s.size()==0)
            {
                ans.push_back(-1);
                
            }
            
            else if(s.size()>0&&s.top().first>arr[i])
            {
                ans.push_back(s.top().second);
                
            }
            
            else if(s.size()>0&&s.top().first<=arr[i])
            {
                while(s.size()>0&&s.top().first<=arr[i])
                {
                    s.pop();
                }
                
                if(s.size()==0)
                ans.push_back(-1);
                
                else ans.push_back(s.top().second);
            }
            s.push({arr[i],i});
            
        }
        
        for(int i=0;i<n;i++)
        {
            ans[i]=i-ans[i];
        }
    }
    
    vector <int> calculateSpan(int price[], int n)
    {
       // Your code here
       vector<int> ans;
       
       solve(ans,n,price);
       return ans;
    }
};



//{ Driver Code Starts.

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		int i,a[n];
		for(i=0;i<n;i++)
		{
			cin>>a[i];
		}
		Solution obj;
		vector <int> s = obj.calculateSpan(a, n);
		
		for(i=0;i<n;i++)
		{
			cout<<s[i]<<" ";
		}
		cout<<endl;
	}
	return 0;
}

// } Driver Code Ends
