class Solution:
    def isPalindrome(self, x: int) -> bool:
        list1 =list(str(x))
        print(list1)
        list2 = list1.copy()
        list2.reverse()
        print(list2)
        return list1==list2