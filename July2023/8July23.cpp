485. Max Consecutive Ones
Easy


class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int i=0,j=0;
        int zero=0,ones=0,maxi=0;
        while(j<nums.size())
        {
            
            if(nums[j]==0)zero++;
            ones++;
            
            while(zero>0)
            {
                if(nums[i]==0)zero--;
                else ones--;
                i++;
            }
            maxi=max(maxi,j-i+1);
            j++;
        }
        return maxi;
    }
};
/*APPROACH BLOCK
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
