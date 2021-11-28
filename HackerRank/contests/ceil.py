len = int(input())
arr = list(map(int,input().rstrip().lstrip().split(' ')))
arr.sort()
for _ in range(int(input())):
    num = int(input())
    low=0
    high=len-1
    mid =-1
    while(low!=high and mid!=0):
        print("hello")
        mid = round((low+high)/2)
        print(mid)
        if num == arr[mid]:
            print(arr[mid])
            low = high
        elif (num>arr[mid]):
            low = mid+1
        elif num<arr[mid]:
            high = mid-1
    else:
        print(arr[mid])