/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* topKFrequent(int* nums, int numsSize, int k, int* returnSize) {
     priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>> mh;
        vector<int> ans;
        map<int,int>mp;
        for(int i=0;i<nums.size();i++)
        {
            mp[nums[i]]++;
        }
       
       for(auto it:mp)
       {
           mh.push({it.second,it.first});
           if(mh.size()>k)
           {
               mh.pop();
           }
       }
       while(mh.size()>0)
       {
           ans.push_back(mh.top().second);
           mh.pop();
       }
        return ans;
    
}
