496. Next Greater Element I

class Solution {
public:
 
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        int n=nums1.size();
      vector<int>ans(n,-1);
      map<int,int>mp;
      stack<int>st;

      for(auto it:nums2)
      {
        while(!st.empty()&&st.top()<it)
        {
            mp[st.top()]=it;
            st.pop();
        }
        st.push(it);
      }
      for(int i=0;i<n;i++)
      {
        if(mp[nums1[i]])
        {
            ans[i]=mp[nums1[i]];
        }
      }
      return ans;
    }
};
