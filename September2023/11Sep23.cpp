class Solution {
public:
    vector<vector<int>> groupThePeople(vector<int>& groupSizes) {
     /*map<int,int>mp;
     vector<vector<int>>v;
     for(auto it:groupSizes)
     {
         mp[it]++;
     }   

     for(auto a:mp)
     {
         int nov=a.second/a.first;
         int k=0;
         while(nov>0)
         {
           vector<int>temp;
           while(temp.size()<a.first)
           {
               if(groupSizes[k++]==a.first)
               {
                   temp.push_back(k-1);
               }
           } 
           v.push_back(temp);
           nov--; 
         }


     }

     return v;*/


      //BETTER CLEAN APPROACH

     map<int,vector<int>>mp;
     vector<vector<int>>ans;
     for(auto it=0;it<groupSizes.size();it++)
     {
         mp[groupSizes[it]].push_back(it);
         if(mp[groupSizes[it]].size()==groupSizes[it])
         {
             ans.push_back(mp[groupSizes[it]]);
             mp[groupSizes[it]]={};
         }
     }
return ans;
    }
};
