for t in range(int(input())):
    n = list(map(int,input().split(" ")))
    final = n[0]*n[1]
    if n[0] >1000:
        print(f"{(90/100)*final}")
    else:
        print(f"{final}")