
void solvensl(vector<int>&arr,vector<int>&left,int size)
    {
        int pseudo=-1;
        stack<pair<int,int>>s;

        for(int i=0;i<size;i++)
        {
            if(s.size()==0)
            {
                left.push_back(pseudo);
            }

            else if(s.size()>0&&s.top().first<arr[i])
            {
                left.push_back(s.top().second);
            }
            else if(s.size()>0&&s.top().first>=arr[i])
            {
                while(s.size()>0&&s.top().first>=arr[i])
                {
                    s.pop();
                }
                if(s.size()==0)
                {
                    left.push_back(-1);
                }
                else left.push_back(s.top().second);
            }
            s.push({arr[i],i});
        }

        for(int i=0;i<size;i++)
        {
            left[i]=left[i]-i;
        }

    }

void solvensr(vector<int>&arr,vector<int>&right,int size)
    {
        stack<pair<int,int>>s;
        int pseudo=size;
        for(int i=size-1;i>=0;i--)
        {
            if(s.size()==0)
            {
                right.push_back(pseudo);
            }

            else if(s.size()>0&&s.top().first<arr[i])
            {
                right.push_back(s.top().second);
            }
            else if(s.size()>0&&s.top().first>=arr[i])
            {
                while(s.size()>0&&s.top().first>=arr[i])
                {
                    s.pop();
                }
                if(s.size()==0)
                {
                    right.push_back(pseudo);
                }
                else right.push_back(s.top().second);
            }
            s.push({arr[i],i});
        }
        reverse(right.begin(),right.end());
        for(int i=0;i<size;i++)
        {
            right[i]=right[i]-i;
        }

    }

    int largestRectangleArea(vector<int>& heights) {
        int size=heights.size();
        if(size==1)
        {
            return heights[0];
        }

        vector<int> left;
        vector<int> right;
        int width[size];
        int area[size];

        solvensl(heights,left,size);
        solvensr(heights,right,size);

        for(int i=0;i<size;i++)
        {
            width[i]=right[i]-left[i]-1;
        
        }
         for(int i=0;i<size;i++)
        {
            area[i]=heights[i]*width[i];
        
        }
        return *max_element(area,area+size);
    }
};

Rain water tapping
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
