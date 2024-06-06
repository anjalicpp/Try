846. Hand of Straights

class Solution {
public:
    bool isNStraightHand(vector<int>& hand, int groupSize) {
        if(hand.size()%groupSize)return false;

        sort(hand.begin(),hand.end());

        map<int,int>mp;

        for(auto it:hand)
        {
            mp[it]++;
        }

        int n=hand.size();

        while(n--)
        {
            for(auto it:mp)
            {
                int a=it.first;

                for(int i=a;i<a+groupSize;i++)
                {
                    if(mp[i]==0)return false;
                    else mp[i]--;

                    if(mp[i]==0) 
                    mp.erase(i);
                }
                break;
            }
        }
        return true;
    }
};
