#https://www.codechef.com/problems/SUPCHEF

for t in range(int(input())):
    M,N,K = map(int,input().split(" "))
    if M > N*K:
        print("YES")
    else:
        print("NO")