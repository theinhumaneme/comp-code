#https://www.codechef.com/problems/CHFRICH

for t in range(int(input())):
    A,B,X = map(int,input().split(" "))
    print(f"{int((B-A)/X)}")