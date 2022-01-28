def MudaMudaMuda(numba):
    for n in range(2,int(numba**1/2)+1):
        if numba%n==0:
            return "No"
    return "Yes"
print(MudaMudaMuda(int(input())))