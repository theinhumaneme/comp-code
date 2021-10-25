test_cases = int(input())
for case in range(test_cases):
    no_of_patients = int(input())
    days_allotted=list()
    days_available=list()
    for patient in range(no_of_patients):
        days_range = input().split(' ')
        days_range = list(map(int,days_range))
        days_available.append(days_range)
        days_available.sort()
    j = 0
    for days in days_available:
        j = j+1
        for day in range(days[0],days[1]+1):
            if day in days_allotted:
                pass
            else:
                days_allotted.append(day)
                break
            # if len(set(days_allotted)) == j:
            #     print("impossible")
            #     flag = 1
            #     break
    if len(days_allotted)== no_of_patients:
        # print(days_allotted)
        days_allotted = list(map(str,days_allotted))
        print(" ".join(days_allotted))
    else:
        print("impossible")