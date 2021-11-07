import math
for test in range(int(input())):
    weight,height = list(map(int,input().split(" ")))
    if ((weight/(height**2)))>=30:
        print("4")
    elif ((weight/(height**2)))>=25:
        print("3")
    elif ((weight/(height**2)))>=19:
        print("2")
    elif ((weight/(height**2)))<=18:
        print("1")