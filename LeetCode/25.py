class Solution:
    def sortSentence(self, s: str) -> str:
        strings = s.split(' ')
        final = ["."]*(len(strings))
        for word in strings:
            final[int(word[-1])-1]=word[:len(word)-1]
        return " ".join(final)