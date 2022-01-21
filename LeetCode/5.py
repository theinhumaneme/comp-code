class Solution:
    def finalValueAfterOperations(self, operations: List[str]) -> int:
        val=0
        for op in operations:
            if op.count('+') == 2:
                val+=1
            else:
                val-=1
        return val