for test in range(int(input())):
    salary = int(input())
    if salary < 1500:
        print(f"{salary + (90/100)*salary+ (10/100)*salary }")
    else:
        print(f"{salary+500+((98/100)*salary)}")