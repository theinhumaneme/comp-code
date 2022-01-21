class Solution:
    def numJewelsInStones(self, jewels: str, stones: str) -> int:
        unique_jewels = list(jewels)
        print(unique_jewels)
        val=0
        for stone in stones:
            if stone in unique_jewels:
                val+=1
        return val
        