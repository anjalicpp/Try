42. Trapping Rain Water

class Solution {
public:
    int trap(vector<int>& height) {
    int n=height.size();

    int lm[n];
    lm[0]=height[0];
    int maxi=lm[0];

    for(int i=1;i<n;i++)
    {
        if(height[i]>maxi)
        {
            maxi=height[i];  
        }
          lm[i]=maxi;
    }

    int rm[n];
    rm[n-1]=height[n-1];
    maxi=rm[n-1];
    for(int i=n-2;i>=0;i--)
    {
        if(height[i]>maxi)
        {
            maxi=height[i];
        }
        rm[i]=maxi;
    }

    int minarr[n];
    for(int i=0;i<n;i++)
    {
        minarr[i]=min(lm[i],rm[i]);
    }

    int water[n];
    for(int i=0;i<n;i++)
    {
        water[i]=minarr[i]-height[i];
    }
    int sum=0;
    for(int i=0;i<n;i++)
    {
         sum+=water[i];
    }

    return sum;
    }
};
