class Solution {
public:
    int maxConsecutiveAnswers(string answerKey, int k) {
        /*BETTER SOLUTION:
         //BETTER SOLUTION:
    int i=0;
    int j=0;
    int t=0;
    int f=0;
    int maxi=0;


    while(j<answerKey.length())
    {
        if(answerKey[j]=='T')t++;
        else f++;

        while(t>k&&f>k)
        {
            if(answerKey[i]=='T')
            t--;
            else f--;
            i++;
        }
        maxi=max(maxi,j-i+1);
        j++;
    }
    return maxi;
        */
      int i=0;
      int j=0;
      int maxi=0;
      map<char,int>mp;
      char op,op1;
      int count=k;
      int flag=0;

     
      while(j<answerKey.length()) 
      {
          if(answerKey[j]=='T')//ch hasvalue T or F op has least occured character
          {
              k--;
          }
          if(k<0)
          {
              maxi=max(j-i,maxi);
              while(answerKey[i]!='T')
              {
                  i++;
              }
              i++;
              k=k+1;
              j++;

          }
          else{
              maxi=max(maxi,j-i+1);
              j++;
          }
        } 


      //  if(mp['T']==mp['F'])
        i=0;j=0;
        k=count;
       while(j<answerKey.length()) 
      {
          if(answerKey[j]=='F')
          {
              k--;
          }
          if(k<0)
          {
              maxi=max(j-i,maxi);
              while(answerKey[i]!='F')
              {
                  i++;
              }
              i++;
              k=k+1;
              j++;

          }
          else{
              maxi=max(maxi,j-i+1);
              j++;
          }
        } 
        return maxi;
    }
};

 //BETTER SOLUTION:
    int i=0;
    int j=0;
    int t=0;
    int f=0;
    int maxi=0;


    while(j<answerKey.length())
    {
        if(answerKey[j]=='T')t++;
        else f++;

        while(t>k&&f>k)
        {
            if(answerKey[i]=='T')
            t--;
            else f--;
            i++;
        }
        maxi=max(maxi,j-i+1);
        j++;
    }
    return maxi;
