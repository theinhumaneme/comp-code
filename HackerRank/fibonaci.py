n = int(input())
fib =[]
i=0
while i!=n:
    if i==0 or i==1:
        fib.append(1)
    else:
        fib.append(fib[i-1]+fib[i-2])
    i+=1
print(fib[-1])