class Solution:
    def balancedStringSplit(self, s: str) -> int:
        count_l=0
        count_r=0 
        count = 0
        for i in range(len(s)+1):
            if (count_l == count_r) and (count_l >= 1) and (count_r >= 1):
                count_l =0 
                count_r =0
                count+=1
                if i == len(s):
                    break
                # print('match')
            if s[i]== 'R':
                count_r+=1
                # print(s[i])
            if s[i] == 'L':
                count_l+=1
                # print(s[i])
        return count