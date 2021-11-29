# for _ in range(int(input())):
#     size,difference = map(int,input().split(" "))
#     # print()
#     array = list(map(int,input().rstrip().lstrip().split(" ")))
#     array.sort(reverse=True)
#     flag = 0
#     for ele in array:
#         try:
#             array.index(ele-difference)
#             print("true")
#             flag=1
#             break
#         except:
#             pass
#     if flag ==1:
#         pass
#     else:
#         print('false')
def BinarySearch(array,size,ele):
    low=0
    high=len(array)-1
    mid =0
    mid = (low+high)/2
    while low<=high:
        mid = (low+high)//2
        print(f"[{ele}] [{array[mid]}]")
        if(ele == array[mid]):
            print("true")
            return 7
        elif (ele<array[mid]):
            high = mid-1
        else:
            low = mid+1
    else:
        return 9

for _ in range(int(input())):
    size,difference = map(int,input().split(" "))
    # print()
    array = list(map(int,input().rstrip().lstrip().split(" ")))
    array.sort()
    print(array)
    flag = 0
    for ele in array:
        try:
            # array.index(difference+ele)
            # flag=1
            print(ele)
            print(difference+ele)
            flag = BinarySearch(array,size,(difference+ele))
            print(flag)
            if flag==7:
                break
        except:
            pass
    if flag ==7:
        pass
    # else:
    #     print('false')