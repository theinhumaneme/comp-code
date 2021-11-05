from typing import final


for test in range(int(input())):
    starting = 2**1
    number_seq = int(input())
    i=0
    for num in range(number_seq+1):
        if (2**i)==starting:
            starting = starting*2
            number=(2**i)*2+2**0
            i=0
        else:
            number = starting+2**i
            i=i+1
        print(number)
