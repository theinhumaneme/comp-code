class Solution:
    def createTargetArray(self, nums: List[int], index: List[int]) -> List[int]:
        final = list()
        for i in range(len(nums)):
            final.insert(index[i],nums[i])
        return final