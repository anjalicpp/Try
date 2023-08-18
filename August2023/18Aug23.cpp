1615. Maximal Network Rank

There is an infrastructure of n cities with some number of roads connecting these cities. Each roads[i] = [ai, bi] indicates that there is a bidirectional road between cities ai and bi.
The network rank of two different cities is defined as the total number of directly connected roads to either city. If a road is directly connected to both cities, it is only counted once.
The maximal network rank of the infrastructure is the maximum network rank of all pairs of different cities.

Given the integer n and the array roads, return the maximal network rank of the entire infrastructure.

 class Solution {
public:
    int maximalNetworkRank(int n, vector<vector<int>>& roads) {
     vector<int>adj[n+1];
     //creating adj list
     for(auto it:roads)  
     {
         adj[it[0]].push_back(it[1]);
         adj[it[1]].push_back(it[0]);

     } 


     //sorting the adj to use lowerbound function
    for(auto &at:adj)
    {
        sort(at.begin(),at.end());
    }


    int maxi=0;
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            
            
            int num=adj[i].size()+adj[j].size();

            int ind=lower_bound(adj[i].begin(),adj[i].end(),j)-adj[i].begin();
            //found  first index of node in range of adj[i]which is
            // greater then or equal to j
               if(ind!=adj[i].size())
               {
                   if(adj[i][ind]==j)
                   num--;      //common edge subtracted
               } 
                maxi=max(maxi,num);
            
        }
    }

    return maxi;
    }
};
