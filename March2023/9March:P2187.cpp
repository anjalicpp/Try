class Solution {
public:
       long long int find(long long int mid,vector<int>& time)
        {  long long int ans=0;
            for(int i=0;i<time.size();i++)
            {
                ans+=mid/time[i];
            }
            return ans;
        }
    long long minimumTime(vector<int>& time, int totalTrips) {
              long long int start=1,end=1e14;
              long long int mid=start+(end-start)/2; 

      
        
            while(start<=end)
            {
             if(find(mid,time)>=totalTrips)
              {
                  end= mid-1;
               }

             else 
                {
                    start=mid+1;
                }
                mid=start+(end-start)/2; 
            }
        
       
      return start; 
    }
};
