973. K Closest Points to Origin
Medium

class Solution {
public:
    vector<vector<int>> kClosest(vector<vector<int>>& nums, int k) {
        priority_queue<pair<int,vector<int>>> maxh;
        vector<vector<int>> ans;
        for(int i=0;i<nums.size();i++)
        {
            maxh.push({nums[i][0]*nums[i][0]+nums[i][1]*nums[i][1],{nums[i][0],nums[i][1]}});
            if(maxh.size()>k)
            {
                maxh.pop();
            }
        }

        while(maxh.size()>0)
        {
           
            ans.push_back(maxh.top().second);
            maxh.pop();
        }
        return ans;
    }
};

2574. Left and Right Sum Differences
Easy

class Solution {
public:
    vector<int> leftRigthDifference(vector<int>& nums) {
        
       vector <int> leftSum;
        vector <int> rightSum;
        vector <int> ans;
        int left_sum=0;
        int right_sum=0;
        for(int i=0;i<nums.size();i++){
                leftSum.push_back(left_sum);
                rightSum.push_back(right_sum);
                left_sum+=nums[i];
                right_sum+=nums[nums.size()-1-i];
        }
        for(int i=0;i<nums.size();i++){
            cout<<leftSum[i]<<" "<<rightSum[i]<<endl;
            ans.push_back(abs(leftSum[i]-rightSum[nums.size()-1-i]));
        }
        return ans;
    }
};
1323. Maximum 69 Number
Easy

class Solution {
public:
    int maximum69Number (int num) {
        if(num==6||num==9)return 9;
     vector<int> v;
     while(num)
     {
         v.push_back(num%10);
         num=num/10;
     }
     reverse(v.begin(),v.end());
     int i=0,j=0;
     int k=2;
     while(j<v.size())
     {
         if(j-i+1<k)
         {j++;}
         
         else if(j-i+1==k)
         {
             if(v[i]==6)
             {v[i]=9;break;}
             else if(v[j]==6)
             {
                 v[j]=9;break;
             }
             j++;
             i++;
         }
     }

     int ans=0;
     for(int i=0;i<v.size();i++)
     {
         ans=ans*10+v[i];
     }
     return ans;
    }
};
215. Kth Largest Element in an Array
Medium
13.5K
669
class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        priority_queue<int,vector<int>,greater<int>>mh;
        for(int i=0;i<nums.size();i++)
        {
            mh.push(nums[i]);
            if(mh.size()>k)
            {
                mh.pop();
            }
        }
        return mh.top();
    }

};
