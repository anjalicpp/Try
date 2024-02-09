class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) 
    {
      /* for(int i=m;i<m+n;i++)
       {
          nums1[i]=nums2[i-m];
             
       }
        sort(nums1.begin(),nums1.begin()+m+n);*/
        
        vector<int>v;
        int i=0,j=0,k=0;
        while(i<m&&j<n)
        {
            if(nums1[i]>nums2[j])
            {
                v.push_back(nums2[j]);
                j++;
            }
            else
            {
                v.push_back(nums1[i]);
            i++;
                
            }
            
        }
        while(i<m)
        {
            v.push_back(nums1[i]);
            i++;
            
        }
    
        while(j<n)
        {
            v.push_back(nums2[j]);
            j++;
            
        }
        nums1=v;
    
    }
};
