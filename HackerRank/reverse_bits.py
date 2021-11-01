test_cases = int(input())
for _ in range(test_cases):
    number = int(input())
    bits = []
    while number>0:
        if number%2==0:
            bits.append(0)
        else:
            bits.append(1)
        number = number/2
    rev = []
    print(len(bits))
    for i in range(len(bits)):
        print(i)
        rev[i]=bits[len(bits)-1-i]
    print(bits)
    print(rev)

