for _ in range(int(input())):
    len  = int(input())
    array = list(map(int,input().lstrip().rstrip().split(" ")))
    len2 = int(input())
    pages_per_day = list(map(int,input().lstrip().rstrip().split(" ")))
    str = """"""
    for pages in pages_per_day:
        test_list = list()
        test_list.extend(array)
        test_list.append(pages)
        test_list.sort(reverse=True)
        rank_list = list(set(test_list))
        rank_list.sort(reverse=True)
        # print(test_list)
        # print(rank_list)
        str = str + f"{rank_list.index(pages)+1} "
        test_list.clear()
        rank_list.clear()
    print(str)
