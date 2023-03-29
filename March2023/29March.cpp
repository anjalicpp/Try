643. Maximum Average Subarray I
Easy
class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
       int i=0,j=0;
       double ans=INT_MIN;
       double sum=0;
       while(j<nums.size())
       {
           sum+=nums[j];
           if(j-i+1<k)
           {
               j++;
           }
           else if(j-i+1==k)
           {
               ans=max(ans,sum);
               sum-=nums[i];
               i++;
               j++;
           }

       } 
       return ans/k;
    }
};

703. Kth Largest Element in a Stream

class KthLargest {
public:
        priority_queue<int,vector<int>,greater<int>> m;
        int K;
    KthLargest(int k, vector<int>& nums) {
        K=k;
         for(int i=0;i<nums.size();i++)
        {
            m.push(nums[i]);
            if(m.size()>k)
            {
            m.pop();
            }
        }
    }
    
    int add(int val) {
        
       
            m.push(val);
            if(m.size()>K)
            {
            m.pop();
            }
       
        return m.top();

    }
};

/**
 * Your KthLargest object will be instantiated and called as such:
 * KthLargest* obj = new KthLargest(k, nums);
 * int param_1 = obj->add(val);
 */
