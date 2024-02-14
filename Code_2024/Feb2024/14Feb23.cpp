2149. Rearrange Array Elements by Sign
class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
       stack<int>pos,neg;
       int n=nums.size();

       for(int i=n-1;i>=0;i--)
       {
           if(nums[i]>0)
           pos.push(nums[i]);
           else
           neg.push(nums[i]);
       }

       int flag=1;
       vector<int>ans;

       while(flag<=n)
       {
           if(flag%2!=0)
           {
               ans.push_back(pos.top());
                pos.pop();
           }
           else{
               ans.push_back(neg.top());
               neg.pop();
           }
           flag++;
       }
       return ans;
    }
};
