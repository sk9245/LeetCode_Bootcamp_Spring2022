// https://leetcode.com/problems/sort-an-array/

class Solution {
public:
    vector<int> sortArray(vector<int>& nums) { 
        mergeSort(nums, 0, nums.size() - 1);
        return nums;
    }
    
    void mergeSort(vector<int> &nums, int l, int r) {
	if(l < r) {
		int mid = (l + r) / 2;
		mergeSort(nums, l, mid);
		mergeSort(nums, mid + 1, r);
		merge(nums, l, mid, r);
	    }
    }
    void merge(vector<int> &nums, int l, int mid, int r) {
        int n1 = mid - l + 1;
        int n2 = r - mid;

        int a[n1];
        int b[n2];

        int i = 0, j = 0, k = l;

        for(int i = 0; i < n1; i++) {
            a[i] = nums[i + l];
        }

        for(int j = 0; j < n2; j++) {
            b[j] = nums[mid + 1 + j];
        }

        while(i < n1 && j < n2) {
            if(a[i] <= b[j]) nums[k++] = a[i++];
            else nums[k++] = b[j++];
        }
        while(i < n1) 
            nums[k++] = a[i++];

        while(j < n2) 
            nums[k++] = b[j++];
    }
};
