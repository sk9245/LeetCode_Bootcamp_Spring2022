// https://leetcode.com/problems/squares-of-a-sorted-array/

class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        int n = nums.size();
        vector<int> ans(n);
        int left = 0;
        int right = n - 1;
        for(int i = n - 1; i >= 0; i--){
            int temp;
            if(abs(nums[left]) <abs(nums[right])){
                temp = nums[right];
                right--;
            }
            else{
                temp = nums[left];
                left++;
            }
            ans[i] = temp* temp;
        }
        return ans;
    }
};
