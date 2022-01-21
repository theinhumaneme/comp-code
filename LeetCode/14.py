class Solution:
    def restoreString(self, s: str, indices: List[int]) -> str:
        key_values = {key:value for (key,value) in zip(indices,s)}
        return ''.join([key_values.get(i) for i in range(len(indices))])