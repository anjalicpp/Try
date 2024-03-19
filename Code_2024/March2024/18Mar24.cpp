621. Task Scheduler
class Solution {
public:
    int leastInterval(vector<char>& tasks, int n) {
       int freq[26]={0};

       for(auto it:tasks)
       {
        freq[it-'A']++;//storing frequency in array to mark occurance
       } 
       sort(begin(freq),end(freq));//max frequency will come at last index of freq array

       int gap=freq[25]-1;//A__A__A between n task of one kind the gaps are n-1ie 3A=2 gaps
       int ideal=gap*n;//max gap predicted based on max frequent task
        for(int i=24;i>=0;i--)
        {
            ideal=ideal-min(gap,freq[i]);//for a given task of a kind say all B we can put them in ideal slot
            //it is equal to which is minimum B or number of gaps simply to say we cannot put B more than gaps to fill ideals

        }
        
        if(ideal<0)
        {
            //means the gaps are fullya filled and overflowing with tasks
            ideal=tasks.size();

        }
        else ideal=tasks.size()+ideal;
        return ideal;
    }

};
