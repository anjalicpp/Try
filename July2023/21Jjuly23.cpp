735. Asteroid Collision
Medium
6.6K
665
Companies
We are given an array asteroids of integers representing asteroids in a row.

For each asteroid, the absolute value represents its size, and the sign represents its direction (positive meaning right, negative meaning left). Each asteroid moves at the same speed.

Find out the state of the asteroids after all collisions. If two asteroids meet, the smaller one will explode. If both are the same size, both will explode. Two asteroids moving in the same direction will never 



class Solution {
public:
    vector<int> asteroidCollision(vector<int>& asteroids) {
      stack<int>st;
      vector<int>ans;
        for(auto currentaster:asteroids)
        {
            int flag=1;
            while(!st.empty()&&st.top()>0&&currentaster<0)
            {
                if(abs(st.top())<abs(currentaster))
                {
                    st.pop();
                    continue;
                }

                else if(abs(st.top())==abs(currentaster))
                {
                    st.pop();
                }
                flag=0;
                break;
            }
            if(flag){
                st.push(currentaster);
            }
           

        }
        
       while(st.size())
       {
           ans.push_back(st.top());
           st.pop();
       }
       reverse(ans.begin(),ans.end());
        return ans;
    }
};
