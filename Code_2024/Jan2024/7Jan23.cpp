class Solution {
public: 
static int r;/needs to be intialised outside the class to work
static bool comp(const vector<int>&a,const vector<int>&b){
     return (a[r]>b[r]);
}
    vector<vector<int>> sortTheStudents(vector<vector<int>>& score, int k) {
      /*  map<int,int>mp;//<kth row entry,index>
        int n=score[0].size();

        for(int i=0;i<score.size();i++)
        {
            mp[score[i][k]]+=i;
        }
        
        vector<vector<int>>ans;
       
        for(auto it:mp)
        {
            int row=it.second;
            vector<int>temp;

            for(int i=0;i<n;i++)
            {
                temp.push_back(score[row][i]);
            }
            ans.push_back(temp);
        }

      reverse(ans.begin(),ans.end());
      return ans;*/
        r=k;
         sort(score.begin(),score.end(),comp);
         return score;
    }
};
int Solution::r = 0;

