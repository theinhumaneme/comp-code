class Solution:
    def numIdenticalPairs(self, nums: List[int]) -> int:
        count = 0
        length = len(nums)
        for i in range(length):
            for j in range(i+1,length):
                if nums[i] == nums[j]:
                    # print(i,j)
                    count+=1
        return count