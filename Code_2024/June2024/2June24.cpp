344. Reverse String

int low=0,high=s.size()-1;char temp;
        while(low<high)
        {
            temp=s[low];
            s[low]=s[high];
            s[high]=temp;
            low++;high--;
        }
