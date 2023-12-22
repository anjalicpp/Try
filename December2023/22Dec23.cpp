1422. Maximum Score After Splitting a String
//Today I received 300 days leetcode annual badge:)

class Solution {
public://
    int maxScore(string s) {
        int total_ones = 0;
    for (char c : s) {
        if (c == '1') {
            total_ones++;
        }
    }
    int max_score = 0;
    int left_zeros = 0;
    for (int i = 0; i < s.length() - 1; i++) {
        if (s[i] == '0') {
            left_zeros++;
        } else {
            total_ones--;
        }
        int score = left_zeros + total_ones;
        max_score = max(max_score, score);
    }
    
    return max_score; 
    }
};
