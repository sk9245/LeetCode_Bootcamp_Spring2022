// https://leetcode.com/problems/binary-search/

class Solution {
  public:
  int search(vector<int>& nums, int target) {
    int pivot, left = 0, right = nums.size() - 1;
    while (left <= right) {
      pivot = left + (right - left) / 2;
      if (nums[pivot] == target) return pivot;
      if (target < nums[pivot]) right = pivot - 1;
      else left = pivot + 1;
    }
    return -1;
  }
};

/* 
Time complexity
Length of array = n
After first Iteration = n / 2
After second Iteration = n / (2 * 2)
....
After k Iteration = n / (2 ^ k) 
                  = 1

n / (2 ^ k)  = 1
n = 2 ^ k
log n = log (2 ^ k)
log n = k log 2
k = log n
*/
