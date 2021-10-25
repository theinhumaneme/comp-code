test_cases = int(input())
for test in range(test_cases):
    u_limit = int(input())
    main_list = list(range(1,u_limit))
    given_list=input().rstrip().split(' ')
    given_list=list(map(int,given_list))
    missing = list(set(main_list)-set(given_list))
    print(missing[0])
