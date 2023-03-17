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
