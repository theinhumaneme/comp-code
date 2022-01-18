no_of_chars = 256
def findSubString(string, pat):

    len1 = len(string)
    len2 = len(pat)
    if len1 < len2:
        return "-1"
    pat_hash = [0] * no_of_chars
    str_hash = [0] * no_of_chars
    for i in range(0, len2):
        pat_hash[ord(pat[i])] += 1

    start, index_start, len_min = 0, -1, float('inf')
    count=0
    for j in range(0, len1):
        str_hash[ord(string[j])] += 1
        if (str_hash[ord(string[j])] <=
                pat_hash[ord(string[j])]):
            count += 1
        if count == len2:
            while (str_hash[ord(string[start])] > pat_hash[ord(string[start])] or pat_hash[ord(string[start])] == 0):

                if (str_hash[ord(string[start])] >
                        pat_hash[ord(string[start])]):
                    str_hash[ord(string[start])] -= 1
                start += 1
            window_len = j - start + 1
            if len_min > window_len:

                len_min = window_len
                index_start = start
    if index_start == -1:
        return "-1"
    return len(string[index_start: index_start + len_min])
t=int(input())
for _ in range(t):
    pat,string=map(str,input().split())
    r=findSubString(string, pat)
    print(r)