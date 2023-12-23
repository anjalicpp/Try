1496. Path Crossing
class Solution {
public:
    bool isPathCrossing(string path) {
       /* unordered_set<string> points;
        points.insert("0,0");
        int x = 0, y = 0;

        for (char d : path) {
            if (d == 'N') y++;
            else if (d == 'S') y--;
            else if (d == 'E') x++;
            else if (d == 'W') x--;

            if (points.count(to_string(x) + "," + to_string(y))) return true;
            points.insert(to_string(x) + "," + to_string(y));
        }

        return false;  */
         int a = 0, b = 0;;
        set<vector<int>> x;
        x.insert({0, 0});
        for (char i: path)
        {
            if (i == 'N')
            {
                b++;
            } 
            else if (i == 'E')
            {
                a++;
            } 
            else if (i == 'S')
            {
                b--;
            }
            else 
            {
                a--;
            }
            if (x.find({a, b}) != x.end())
            {
                return true;
            }
            x.insert({a, b});
        }
        return false;
    }
};
