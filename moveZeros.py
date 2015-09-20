#problem statement : https://leetcode.com/problems/move-zeroes/
#Given an array nums, write a function to move all 0's to the end of it while maintaining the relative order of the non-zero elements.
#For example, given nums = [0, 1, 0, 3, 12], after calling your function, nums should be [1, 3, 12, 0, 0].

#Note:
#You must do this in-place without making a copy of the array.
#Minimize the total number of operations. 


def moveZeros(): #this is the function that we need
	
	nums = input("Enter array elements (within [] brackets separated by ,) >>" )
	end = 0
	for curIndex, element in enumerate(nums):

		if element == 0 and curIndex != len(nums)-1:
			nextIdx = curIndex + 1
			
			while nums[nextIdx] == 0:
				nextIdx += 1
				if nextIdx == len(nums):
					end = 1
					break   # all 0s ahead
					
			if end == 1:
				break
			
			nums[curIndex] = nums[nextIdx]
			nums[nextIdx] = 0
        

	return nums

		
		




if __name__ == '__main__' :
	nums = moveZeros()
	print nums