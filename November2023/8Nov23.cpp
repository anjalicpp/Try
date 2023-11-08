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

