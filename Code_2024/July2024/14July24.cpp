1710. Maximum Units on a Truck
class Solution {
public:

    bool static comp(const vector<int>&v1,const vector<int>&v2)
    {
        return v1[1]>v2[1];
    }
    int maximumUnits(vector<vector<int>>& boxTypes, int truckSize) {
        sort(boxTypes.begin(),boxTypes.end(),comp);

        int Total=0;

        for(int i=0;i<boxTypes.size();i++)
        {
            if(boxTypes[i][0]<=truckSize)
            {
                Total+=boxTypes[i][0]*boxTypes[i][1];
                truckSize-=boxTypes[i][0];
            }
            else{
                Total+=truckSize*boxTypes[i][1];
                break;
            }
        }
        return Total;
    }
};
