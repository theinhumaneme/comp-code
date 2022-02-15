# cook your dish here
for t in range(int(input())):
    val = list(map(int,input().split(" ")))
    print(f"{val[2]*val[0] - val[1]*val[0]}")