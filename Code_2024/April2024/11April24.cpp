
402. Remove K Digits
class Solution {
public:
    string removeKdigits(string num, int k) {
     int n=num.size();

     if(n==k)return "0";

     string ans;
     vector<int>arr;

     for(int i=0;i<n;i++)
     {
        while(k>0&&!arr.empty()&&arr.back()>num[i])
        {
            arr.pop_back();//if num in arr are larger than current number pop them out
            k--;
        }
        arr.push_back(num[i]);
     }

     //if k>0 still then pop more elements
     while(k>0)
     {
        arr.pop_back();
        k--;
     }

     //for leading zero case-->0200=200

     for(auto it:arr)
     {
        if(it=='0'&&ans.empty())//leading zero case
        continue;

        ans+=it;
     }
     
     if(ans.size()==0) 
     {
        ans.push_back('0');
     }
    return ans;
    }
};



2259. Remove Digit From Number to Maximize Result

class Solution {
public:
    string removeDigit(string number, char digit) {
       int n=number.length();

       int last_Occur=-1;

       for(int i=0;i<n-1;i++)
       {
        if(number[i]==digit)
        {
            if(number[i]<number[i+1])
            {
                number.erase(i,1);
                return number;
            }
            last_Occur=i;
        }
       }

       if(number[n-1]==digit)
       {
        last_Occur=n-1;
       }

       number.erase(last_Occur,1);
       return number;
    }
};
