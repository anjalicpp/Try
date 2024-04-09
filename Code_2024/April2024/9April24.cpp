
2073. Time Needed to Buy Ticketsclass Solution {
public:
    int timeRequiredToBuy(vector<int>& tickets, int k) {
        int ans=0;
        int comp=tickets[k];
       for(int i=0;i<tickets.size();i++)
       {
        if(tickets[i]>comp&&i<=k)
        {
            ans+=comp;
        }
        else if(tickets[i]>=comp&&i>k)
        {
            ans+=comp-1;
        }
        else ans+=tickets[i];
       }
        return ans;
    }
};
