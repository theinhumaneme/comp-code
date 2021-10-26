# test_cases = int(input())
# for test in range(test_cases):
#     u_limit = int(input())
#     main_list = list(range(1,u_limit+1))
#     # print(main_list)
#     given_list=input().rstrip().lstrip().split(' ')
#     given_list=list(map(int,given_list))
#     print(given_list)
#     missing = list(set(main_list)-set(given_list))
#     missing = main_list-given_list
#     print(missing[0])

# test_cases = int(input())
# for test in range(test_cases):
#     u_limit = int(input())
#     main_list = list(range(1,u_limit+1))
#     # print(main_list)
#     given_list=input().rstrip().lstrip().split(' ')
#     given_list=list(map(int,given_list))
#     print(given_list)
#     # missing = list(set(main_list)-set(given_list))
#     # missing = main_list-given_list
#     for el in main_list:
#         if el not in given_list:
#             print(el)
#     # print(missing[0])

# test_cases = int(input())
# for test in range(test_cases):
#     u_limit = int(input())
#     main_list = list(range(1,u_limit+1))
#     # print(main_list)
#     given_list=input().rstrip().lstrip().split(' ')
#     given_list=list(map(int,given_list))
#     for i,j in zip(sorted(main_list),sorted(given_list)):
#         # print(i)
#         if i !=j:
#             print(i)
#             break

test_cases = int(input())
for test in range(test_cases):
    u_limit = int(input())
    main_list = list(range(1,u_limit+2))
    # print(main_list)
    given_list=input().rstrip().lstrip().split(' ')
    given_list=list(map(int,given_list))
    for ele in given_list:
        print(ele)
        main_list.remove(ele)
    print(main_list[0])