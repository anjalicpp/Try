692. Top K Frequent Words
Medium

Given an array of strings words and an integer k, return the k most frequent strings.

Return the answer sorted by the frequency from highest to lowest. Sort the words with the same frequency by their lexicographical order.

 struct Compare {
    bool operator()(const pair<int, string>& a, const pair<int, string>& b) {
        if(a.first != b.first) {
            return a.first < b.first;
        }
        return a.second > b.second;
    }
};



class Solution {
   
public:
    vector<string> topKFrequent(vector<string>& words, int k) {
       unordered_map<string,int>mp;
        vector<string> ans;
        for(auto it:words)
        {
            mp[it]++;
        }

        priority_queue<pair<int,string>,vector<pair<int,string>>,Compare>mh;
        for(auto it:mp)
        {
            mh.push({it.second,it.first});
            

        }
        while(k--)
        {
            
            ans.push_back(mh.top().second);
            mh.pop();
        }
        //sort(ans.begin(),ans.end());
        return ans;

    }
}; 
