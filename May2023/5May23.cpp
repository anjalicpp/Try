1456. Maximum Number of Vowels in a Substring of Given Length
Medium
2.3K
75
Companies
Given a string s and an integer k, return the maximum number of vowel letters in any substring of s with length k.

Vowel letters in English are 'a', 'e', 'i', 'o', and 'u'.

 

Example 1:

Input: s = "abciiidef", k = 3
Output: 3
Explanation: The substring "iii" contains 3 vowel letters.


class Solution {
public:
    int maxVowels(string s, int k) {
        int size=s.length();
        int j=0;int i=0;
        int count=0;
        int ans=INT_MIN;

        while(j<size)
        {
            if(s[j]=='a'||s[j]=='e'||s[j]=='i'||s[j]=='o'||s[j]=='u')
            count++;
            if(j-i+1<k)
            {
                j++;
            }
            else if(j-i+1==k)
            {
                ans=max(count,ans);
                 if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u')
                 count--;
                 i++;j++;
            }
        }
        return ans;
    }
};
