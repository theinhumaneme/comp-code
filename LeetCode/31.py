#https://leetcode.com/problems/decode-xored-array/submissions/

class Solution:
    def decode(self, encoded: List[int], first: int) -> List[int]:
        xored = first
        final =[]
        final.append(first)
        for enc in encoded:
            xored = xored^enc
            final.append(xored)
        return final