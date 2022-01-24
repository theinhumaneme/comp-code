import re
class Solution:
    def isPrefixOfWord(self, sentence: str, searchWord: str) -> int:
        words = sentence.split(" ")
        flag = 0
        for word in words:
            if re.match(searchWord,word):
                flag=1
                return words.index(word)+1
        return -1