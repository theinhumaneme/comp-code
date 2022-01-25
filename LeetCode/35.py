#https://leetcode.com/problems/minimum-number-of-moves-to-seat-everyone/submissions/

class Solution:
    def minMovesToSeat(self, seats: List[int], students: List[int]) -> int:
        seats.sort()
        students.sort()
        return sum(abs(j-i) for i,j in zip(seats,students))