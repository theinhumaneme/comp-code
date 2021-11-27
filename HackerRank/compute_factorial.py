from math import factorial

# def fact_number(number):
#     if number >=1:
#         return number*fact_number(number-1)
#     else:
#         return 1
for _ in range(int(input())):
    number = int(input())
    print(f"{factorial(number)%1000000007}")

