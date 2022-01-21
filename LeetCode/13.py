import math
class Solution:
    def subtractProductAndSum(self, n: int) -> int:
        return math.prod(list(map(int,list(str(n))))) - sum(list(map(int,list(str(n)))))
        