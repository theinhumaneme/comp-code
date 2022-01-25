#https://leetcode.com/problems/xor-operation-in-an-array/submissions/

class Solution:
    def xorOperation(self, n: int, start: int) -> int:
        xored=start
        for i in range(1,n):
            xored = xored^((start+(i*2)))
        return xored
        