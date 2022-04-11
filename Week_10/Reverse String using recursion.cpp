// https://leetcode.com/problems/reverse-string/

class Solution {
public:
    void ans(vector<char>& s, int left, int right){
        if(left>=right)
            return;
        swap(s[left], s[right]);
        left++;
        right--;
        ans(s, left, right);
    }
    
    void reverseString(vector<char>& s) {
        ans(s, 0, s.size() - 1);
        
    }
};
