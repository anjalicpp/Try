class Solution {
public:
    string frequencySort(string s) {
        map<char,int>m;
        int size=s.size();
        for(int i=0;i<size;i++)
        {
            m[s[i]]++;
        }
      vector<pair<int,char>>v;
        for(auto i:m)
        {
            v.push_back({i.second,i.first});
            //vector me store karo data in freq:char form me
            
        }
        
        sort(v.begin(),v.end());//increasing orderv of frequency
        string ans="";
        
        //storing in string in increasing order of frequency
        for(auto i:v)
        {
            for(int j=0;j<i.first;j++)
            {
                ans+=i.second;
                
            }
            
        }
        //now sort bcz ans is in increasing order of frequency;
        
       reverse(ans.begin(),ans.end());
        return ans;
    }
};
