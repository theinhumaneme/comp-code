for _ in range(int(input())):
    len = int(input())
    arr = list(map(int,input().rstrip().lstrip().split(" ")))
    # arr.sort()
    flag =0
    for i in range(len):
        print(arr[0:i+1])
        print(arr[i+1:])
        if sum(arr[0:i]) == sum(arr[i+1:]):
            print("YES")
            flag =1
            break
    if flag ==0:
        print("NO")