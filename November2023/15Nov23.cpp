1846. Maximum Element After Decreasing and Rearranging

class Solution {
public:
    int maximumElementAfterDecrementingAndRearranging(vector<int>& arr) {
       sort(arr.begin(),arr.end());
       arr[0]=1;//condition in question

       for(int i=1;i<arr.size();i++)
       {
           if(abs(arr[i]-arr[i-1])<=1)continue;//if satisfy move on
           else arr[i]=arr[i-1]+1;//if not satisfied make element previous+1;
       }
       return arr[arr.size()-1];



    }
};
