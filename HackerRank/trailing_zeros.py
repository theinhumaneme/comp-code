from math import factorial

for tc in range(int(input())):
    n = int(input())
    count = int()
    while(n >= 5):
        n //= 5
        count += n
    print(count)