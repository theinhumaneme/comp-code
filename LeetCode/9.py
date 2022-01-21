class Solution:
    def kidsWithCandies(self, candies: List[int], extraCandies: int) -> List[bool]:
        return [True if kid_with_candy+extraCandies >= max(candies) else False for kid_with_candy in candies]