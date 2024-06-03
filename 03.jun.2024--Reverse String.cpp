/*
Link:-

https://leetcode.com/problems/reverse-string/?envType=daily-question&envId=2024-06-02

*/

class Solution {
public:
    void reverseString(vector<char>& s) {
        int left = 0, right = s.size() - 1;
        while (left < right) {
            swap(s[left], s[right]);
            left++;
            right--;
        }
    }
};
