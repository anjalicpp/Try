class Solution {
public:
    bool checkStraightLine(vector<vector<int>>& coordinates) {
       /* if(coordinates.size()==2)return true;
        int slope=-1;

        if(coordinates[1][0]-coordinates[0][0])
       slope=(coordinates[1][1]-coordinates[0][1])/(coordinates[1][0]-coordinates[0][0]);
       int y=coordinates[1][1];
       int x=coordinates[1][0];
       //int s;

       for(auto z:coordinates)
       

        {
            int s=-1;
            if(z[0]-x!=0)
            s=(z[1]-y)/(z[0]-x);
            
            if(s!=slope) return false;
        }
        return true;*/
         int n = coordinates.size();

        int x1 = coordinates[0][0];
        int y1 = coordinates[0][1];

        int x2 = coordinates[1][0];
        int y2 = coordinates[1][1];

        for(int i = 2; i < n; i++){
            int x = coordinates[i][0];
            int y = coordinates[i][1];

            // y - y1 / x - x1 != y - y2 / x - x2
            // Division may cause division by zero error.

            if((y - y1) * (x - x2) != (y - y2) * (x - x1)){
                return false;
            } 
        }
        return true;
    }
};
