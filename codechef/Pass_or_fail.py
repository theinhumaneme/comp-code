#https://www.codechef.com/problems/PASSORFAIL

for t in range(int(input())):
    N,X,P  = map(int,input().split(" "))
    if ((X*3)+((N-X)*-1)) >= P:
        print("PASS")
    else:
        print("FAIL")