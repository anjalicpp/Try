class Solution {
public:
    vector<int> deckRevealedIncreasing(vector<int>& deck) {
        sort(deck.begin(),deck.end());
         deque<int>dq;
         int n=deck.size();
         dq.push_front(deck[n-1]);

         for(int i=n-2;i>=0;i--)
         {
            int temp=dq.back();
            dq.pop_back();
            dq.push_front(temp);
            dq.push_front(deck[i]);
            
         }
         vector<int> ans;
         while(!dq.empty())
         {
           ans.push_back( dq.front());
           dq.pop_front();
         }
         return ans;
    }
};
