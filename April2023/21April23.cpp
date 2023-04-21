class Solution {
public:
    int addMinimum(string word) {
     
    string comp="abc";
    int ans=0;
    int i=0;
    int j=0;
    if(word.size()==1)
    {
        return 2;
    }
    while(i<word.size())
    {
        
        if(word[i]==comp[j])
        {
            i++;
            j=j%3+1;
        }
        else
        {
         ans+=1;
        j=j%3+1;
        }
        

    }
   

        return ans;
       /* string abc="abc";
		int count=0,j=0;

		for(int i=0;i<word.size();)
		{
			j=j%3;

			if(word[i]==abc[j])
				i++;
			else
				count++;

			j++;
		}

		count +=(3-j);        // if last letter was not c then add count of remaining chars 
		return count;*/
    
    }
};
