class Solution {
public:
    bool isReachableAtTime(int sx, int sy, int fx, int fy, int t) {
        if((sx==fx)&&(sy==fy)) return t!=1;
       
       int xdist=abs(sx-fx);
       int ydist=abs(sy-fy);

       int mindist=min(xdist,ydist)+abs(ydist-xdist);
       return t>=mindist;
    }
}; 

Intuition:
In this problem, we are given a cell grid with a source cell (sx, sy), a target cell (fx, fy), and a time limit 't'. 
The task is to determine whether it's possible to reach the target cell from the source cell within exactly 't' units of time. 
To solve this, we need to consider the maximum distance between the source and target cells and compare it to the given time limit.

Explanation:
If the source and target cells are the same, it checks if 't' is not equal to 1.
This is because you need at least one unit of time to move between them, so 't' must be greater than 1 in this case.
If the source and target cells are different, it calculates the maximum horizontal or vertical distance between them.
It checks if this maximum distance is less than or equal to 't'.
If yes, it's possible to reach the target cell within 't' units of time.
