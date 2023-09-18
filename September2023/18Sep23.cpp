class Solution {
public:
    vector<int> kWeakestRows(vector<vector<int>>&matrix, int k) {
        vector<int>ans;
        vector<pair<int,int>>temp;
       for(int i=0;i<matrix.size();i++)
       {
           int sum=0;
           for(int j=0;j<matrix[0].size();j++)
           {
               if(matrix[i][j]==1)
               {
                   sum+=1;
               }
           }
           temp.push_back({sum,i});
       }
        sort(temp.begin(),temp.end());
        for(int i=0;i<k;i++)
        {
            ans.push_back(temp[i].second);
        }

        return ans;
    }
};
