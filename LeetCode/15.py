class Solution:
    def decompressRLElist(self, nums: List[int]) -> List[int]:
        final = list()
        for i in range(0,len(nums),2):
            final.extend([nums[i+1]]*nums[i])
        return final