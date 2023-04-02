class Solution {
public:
    vector<int> successfulPairs(vector<int>& spells, vector<int>& potions, long long success) {
        sort(potions.begin(),potions.end());
        vector<int>ans;
        int count=0;
        long long int check;

        for(int i=0;i<spells.size();i++)
        {
            count=0;
            for(int j=0;j<potions.size();j++)
            {
                check=spells[i]*potions[j];
                if(check>=success)
                {
                   count++;
                }
               

            }
            ans.push_back(count);
        }
        return ans;
    }
};
