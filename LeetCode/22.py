class Solution:
    def twoSum(self, nums: List[int], target: int) -> List[int]:
        for i in range(len(nums)):
            num = nums[i]
            for j in range(i+1,len(nums)):
                if num + nums[j] == target:
                    print(i,j)
                    return [i,j]