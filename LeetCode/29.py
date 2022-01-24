# https://leetcode.com/problems/nim-game/submissions/
class Solution:
    def canWinNim(self, n: int) -> bool:
        return True if n%4 !=0 else False