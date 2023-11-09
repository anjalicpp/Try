class Solution {
public:
    int eliminateMaximum(vector<int>& dist, vector<int>& speed) {
        int n=dist.size();

        vector<int>monsters(n,0);
        //monster array to calculate the arrival of monster at particular time.
        //speed=distance/time.
       
        for(int i=0;i<n;i++)
        {
            int arrival_time=ceil(static_cast<double>(dist[i])/speed[i]);
            if(arrival_time<n)
            {
                monsters[arrival_time]++;

            }
        }
        int dead_monsters=0;
        //to keep the count of elliminated monsters

        for(int i=0;i<n;i++)
        {
            if(dead_monsters+monsters[i]>i)
            {
                return i;
                //means elliminated monsters+monsters arriving at that point exceeds 
                //that very second the counter means more monsters reached but
                // we can kill only one.
            }
            dead_monsters+=monsters[i];
        }
        return n;
    }
};
