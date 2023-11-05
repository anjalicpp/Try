class Solution {
public:

/*void Reverse(vector<int>&arr, int start, int end)
    {
        while (start <= end)
        {
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
        }
    }

        void Rotateeletoright(vector<int>&arr, int n, int k)
        {
  // Reverse first n-k elements
            Reverse(arr, 1,k);
  // Reverse last k elements
            Reverse(arr,k+1, n - 1);
  // Reverse whole array
            Reverse(arr, 1, n - 1);
        }*/


    int getWinner(vector<int>& arr, int k) {

       /* int count=0;

        if(k>=arr.size())
        {
            return *max_element(arr.begin(),arr.end());
        }
        else
        {
            while(1)
            {
                if(count==k)return arr[0];

                if(arr[0]>arr[1])
                {
                    count++;
                    int n=arr.size();
                    Rotateeletoright(arr,n,1);
                }
                else
                {
                    count=0;
                    int temp=arr[0];
                    arr[0]=arr[1];
                    arr[1]=temp;
                    count++;
                    int n=arr.size();
                    Rotateeletoright(arr,n,1);
                }
            }
        }

       // return arr[0];
       */
-------------------------------------------------------------------------------------------------------------------
      int getWinner(vector<int>& arr, int k) {

       if(k==1)
       return max(arr[0],arr[1]);

       if(k>=arr.size())
       return *max_element(arr.begin(),arr.end());

       int winner=arr[0];
       int wins=0;

       for(int i=1;i<arr.size();i++)
       {
           if(winner>arr[i])
           {
               wins++;
           }
           else
           {
               winner=arr[i];
               wins=1;
           }
           if(wins==k)
           {
               return winner;
           }
       }
       return winner;
    }
};
