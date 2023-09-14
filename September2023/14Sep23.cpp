class OrderedStream {
public:map<int,string>mp;
int count=1;
    OrderedStream(int n) {
        
    }
    
    vector<string> insert(int idKey, string value) {
        mp.insert({idKey,value});
        vector<string> ans;

        for(auto it:mp)
        {
            if(it.first==count)
           { ans.push_back(it.second);
            count++;
           }
        }
       
        return ans;
    }
};

/**
 * Your OrderedStream object will be instantiated and called as such:
 * OrderedStream* obj = new OrderedStream(n);
 * vector<string> param_1 = obj->insert(idKey,value);
 */
