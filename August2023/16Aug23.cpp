239. Sliding Window Maximum
You are given an array of integers nums, there is a sliding window of size k which is moving from the very left of the array to the very right. You can only see the k numbers in the window. Each time the sliding window moves right by one position.
Return the max sliding window.

class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>&arr, int k) {
       vector<int> ans;
       list<int> lit;
      int i=0,j=0;
      while(j<arr.size())
      {
          while(lit.size()>0&&lit.back()<arr[j])
        {
             lit.pop_back();
        }
          
           lit.push_back(arr[j]);
            
          
         
          if(j-i+1<k)
          {
              j++;
          }
          else if(j-i+1==k)
          {
              ans.push_back(lit.front());

            if(lit.front()==arr[i])
            {
                lit.pop_front();
            } 
            i++;j++; 
          }
      }
      return ans;
    }
};
