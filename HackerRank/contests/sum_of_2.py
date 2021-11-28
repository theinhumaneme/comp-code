for _ in range(int(input())):
    len1 = int(input())
    arr = list(map(int,input().lstrip().rstrip().split(" ")))
    sum_arr = sum(arr)
    set_arr = list(set(arr))
    flag =0
    for i in set_arr:
        for j in set_arr[::-1]:
            if i+j == (sum_arr-i-j):
                flag =1
            else:
                pass
    if flag == 1:
        print("Yes")
    elif flag == 0:
        print("No")