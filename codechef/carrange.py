#codechef.com/problems/CARRANGE

for num in range(int(input())):
    P,M,V = map(int,input().split(" "))
    print(f"{V*(M-(P-1))}")