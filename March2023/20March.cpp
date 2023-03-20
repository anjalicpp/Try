class Solution {
public:
    long long maximumSubarraySum(vector<int>& nums, int k) {
      /*  if(k==1) {
        long long int ans=max(nums.begin(),nums.end());
        return ans;
        }*/
        
        int i=0,j=0;
        long long int sum=0;
        int size=nums.size();
        long long int maxi=0;

        while(j<size)
        {
            sum+=nums[j];
            if(j-i+1<k)
            {
                j++;
            }

            else if(j-i+1==k)
            {
                if((nums[i]==nums[j]||nums[i]==nums[i+1]||nums[j]==nums[j-1])&&k!=1)
                {
                long long int zero=0;
                   maxi=max(maxi,zero); 
                
                }
                else {
                    maxi=max(maxi,sum);
                }
                sum=sum-nums[i];
                 i++;j++;
            }
        }
        
        return maxi;
    }
};


class Solution {
public:
/*
void printRepeating(int arr[], int n)
{
    // First check all the values that are
    // present in an array then go to that
    // values as indexes and increment by
    // the size of array
    for (int i = 0; i < n; i++)
    {
        int index = arr[i] % n;
        arr[index] += n;
    }
 
    // Now check which value exists more
    // than once by dividing with the size
    // of array
    for (int i = 0; i < n; i++)
    {
        if ((arr[i] / n) >= 2)
            cout << i << " ";
    }
}
*/

    int duplicate(vector<int>nums,int x,int k)
    {
        int flag=0;
        for(int i=x;i<k;i++)
        {
            int index=nums[i]%k;
            nums[index]+=k;
        }

        for(int i=x;i<k;i++)
        {
            if((nums[i]/k)>=2)
            flag=1;
        }
         return flag;
    }
    long long maximumSubarraySum(vector<int>& nums, int k) {
      /*  if(k==1) {
        long long int ans=max(nums.begin(),nums.end());
        return ans;
        }*/
        
        int i=0,j=0;
        long long int sum=0;
        int size=nums.size();
        long long int maxi=0;

        while(j<size)
        {
            sum+=nums[j];
            if(j-i+1<k)
            {
                j++;
            }

            else if(j-i+1==k)
            {
                if((duplicate(nums,i,k)))
                {
                long long int zero=0;
                   maxi=max(maxi,zero); 
                
                }
                else {
                    maxi=max(maxi,sum);
                }
                sum=sum-nums[i];
                 i++;j++;
            }
        }
        
        return maxi;
    }
};

//{ Driver Code Starts
#include<bits/stdc++.h> 
using namespace std; 

// } Driver Code Ends
class Solution{   
public:
    long maximumSumSubarray(int k, vector<int> &arr , int n){
     
        // code 
        int i=0,j=0;
        long int sum=0;
        long int maxi=INT_MIN;
        
        while(j<n)
        {
            sum+=arr[j];
            if(j-i+1<k)
            {
                j++;
            }
            else if(j-i+1==k)
            {
                maxi=max(maxi,sum);
                sum-=arr[i];
                i++;j++;
            }
        }
        return maxi;
        
    }
};

//{ Driver Code Starts.
int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        int N,K;
        cin >> N >> K;;
        vector<int>Arr;
        for(int i=0;i<N;++i){
            int x;
            cin>>x;
            Arr.push_back(x);
        }
        Solution ob;
        cout << ob.maximumSumSubarray(K,Arr,N) << endl;
    }
    return 0; 
} 
// } Driver Code Ends
