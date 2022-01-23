from math import factorial

for _ in range(int(input())):
    number = int(input())
    print(f"{factorial(number)%1000000007}")

