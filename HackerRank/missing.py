test_cases = int(input())
for test in range(test_cases):
    u_limit = int(input())
    main_list = list(range(1,u_limit+2))
    # print(main_list)
    given_list=input().rstrip().lstrip().split(' ')
    given_list=list(map(int,given_list))
    number = (sum(main_list)-sum(given_list))
    print(number)