#https://leetcode.com/problems/count-items-matching-a-rule/submissions/

# ruleKey_Dict={"type":0,'color':1,'name':2}
# for i in items:
#     if items[i][ruleKey_Dict.get(ruleKey)] == ruleValue:
#         return items[i][ruleKey_Dict.get(ruleKey)] 


class Solution:
    def countMatches(self, items: List[List[str]], ruleKey: str, ruleValue: str) -> int:
        ruleKey_Dict={"type":0,'color':1,'name':2}
        count=0
        for i in range(len(items)):
            if items[i][ruleKey_Dict.get(ruleKey)] == ruleValue:
                count+=1 
        return count

