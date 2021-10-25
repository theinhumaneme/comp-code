inputs = input().split(' ')
inputs = list(map(int,inputs))

summation=-1
for i in range(inputs[2]+1):
    summation = summation+((inputs[0]**i)*(i**inputs[1]))
print(summation)
final = summation%inputs[3]
print(final)
