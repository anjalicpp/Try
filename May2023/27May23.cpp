
class Solution {
public:
    double average(vector<int>& salary) {
        sort(salary.begin(),salary.end());
        double ans=0;
        int size=salary.size()-2;
        for(int i=1;i<=size;i++)
        {
            ans+=salary[i];
        }
        return ans/size; 
    }
};
