# https://leetcode.com/problems/squares-of-a-sorted-array/

class Solution:
    def sortedSquares(self, nums: List[int]) -> List[int]:
        array_size = len(nums) # save initial length
        output_array = [0] * array_size # output array makes this space complexity = O(N)
        left = 0 # left pointer starts at the left side of the array 
        right = array_size - 1 # right pointer starts at the right end 
        output_counter = array_size - 1 # need output counter to keep track of where to place squares in the output array 
        while left <= right:  # while both pointers are NOT crossing (can be the same so the last "middle" element gets added (not always necessarily going to be in the center of the array unless array is balanced) 
            square_left = nums[left] ** 2
            square_right = nums[right] ** 2
            if square_left > square_right:
                output_array[output_counter] = square_left
                left += 1 # increment left side to narrow search width
            else:
                output_array[output_counter] = square_right
                right -= 1 # decrement right side to narrow search width
            output_counter -= 1 # decrement output counter to show where the next element will be inserted in the output array 
               
		# returns a new array
		# SC: O(N) TC: O(N)
        return output_array
