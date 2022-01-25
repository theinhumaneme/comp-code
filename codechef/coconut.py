#https://www.codechef.com/problems/COCONUT

for t in range(int(input())):
    xa,xb,Xa,Xb = map(int,input().split(" "))
    print(f"{int(Xa/xa)+int(Xb/xb)}")