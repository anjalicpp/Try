1903. Largest Odd Number in String
class Solution {
public:
    string largestOddNumber(string num) {
    
    //solution -1
    /* stack<char>st;
     for(auto it:num)
     {
         st.push(it);//putting in stack to know last odd digit
     } 
     
     string ans="";
     int flag=0;//to maintain ans after first odd number and flag is set to 1

     while(!st.empty())
     {
         if(int(st.top()-'0')%2==1&&flag==0)
         {
             flag=1;
             
         }
         
         if(flag==1)
         {
             ans+=st.top();
         }

        st.pop();
     }
     
     reverse(ans.begin(),ans.end());//we have ans in reverse so need to return ans after reversing it
     return ans;  */

//solution -2
     int i=num.size();
     while(i--)
     {
         if(num[i]=='1'||num[i]=='3'||num[i]=='5'||num[i]=='7'||num[i]=='9')
         return num.substr(0,i+1);
     }
     return "";
    }
};
