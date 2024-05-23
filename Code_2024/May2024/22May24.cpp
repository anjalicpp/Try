Palindrome Partitioning
class Solution {
public:
    bool palindrome(string s,int st,int e)//paloindrome checking
    { while(st<=e)
         {
        if(s[st++]!=s[e--])
            return false;
        }
     return true;
    }
    
    void func(int index,string s, vector<vector<string>>&res,vector<string>&path)
    {
        if(index==s.size())  //base case
        {
            res.push_back(path);
            return;
        }
        
        for(int i=index;i<s.size();i++)
        {
            if(palindrome(s,index,i))
            {
                path.push_back(s.substr(index,i-index+1));//substring to be inserted in path
                func(i+1,s,res,path);//recursive call
                path.pop_back();//backtrack
            }
            
        }
    }
    
    vector<vector<string>> partition(string s)
    {
        vector<vector<string>>res;
        vector<string>path;
        func(0,s,res,path);
        return res;
    }
        
    
};
