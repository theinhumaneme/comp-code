class Solution:
    def shuffle(self, nums: List[int], n: int) -> List[int]:
        final=list()
        for x,y in zip(nums[0:len(nums)//2],nums[len(nums)//2:]):
            final.append(x)
            final.append(y)
        return final
            