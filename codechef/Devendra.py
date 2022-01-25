#https://www.codechef.com/problems/DEVSPORTS

for t in range(int(input())):
    Z,Y,A,B,C = map(int,input().split(" "))
    if Z >= Y+A+B+C:
        print("YES")
    else:
        print("NO")