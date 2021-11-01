from itertools import combinations
def str(s, m):
    a = s[0]
    b = s[1]
    c = s[2]
    s = ""
    for i in range(len(a)):
        if a[i] == "y" or b[i] == "y" or c[i] == "y":
            s += "y"
        else:
            s += "n"
    my_string = ""
    for i in range(m):
        my_string += "y"
    if my_string == s:
        return True
    else:
        #print("NO")
        return False
num=int(input())
for k in range(num):
    count=0
    mn = input().split(' ')
    n = int(mn[0])
    m = int(mn[1])
    li=[]
    for i in range(n):
        temporary = input()
        li.append(temporary)
    my_list=[]
    li = combinations(li,3)
    for i in li:
        my_list.append(list(i))
    for i in my_list:
        if str(i,len(i[0])):
            count+=1
    print(count)