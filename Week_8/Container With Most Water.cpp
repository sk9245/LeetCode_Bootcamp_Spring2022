// https://leetcode.com/problems/container-with-most-water/

class Solution {
public:
    int maxArea(vector<int>& height) {
    int left=0,
        right=height.size()-1;
    //considering max product initially to be prod of first and last num
    int max_amount=INT_MIN; 
    
    while(left<right)
    {
        int product = min(height[left],height[right])*(right-left);
        if(max_amount<product)
            max_amount = product ;  
        
        //we will move the pointer which is comparatively smaller since we want greater prod than now
        if(height[left]<=height[right]) left++;
        else right--;
    }
    
    return max_amount;
    }
};
