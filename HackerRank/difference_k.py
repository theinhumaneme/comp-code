for _ in range(int(input())):
    size,difference = map(int,input().split(" "))
    # print()
    array = list(map(int,input().rstrip().lstrip().split(" ")))
    array.sort(reverse=True)
    flag = 0
    for ele in array:
        try:
            array.index(ele-difference)
            print("true")
            flag=1
            break
        except:
            pass
    if flag ==1:
        pass
    else:
        print('false')