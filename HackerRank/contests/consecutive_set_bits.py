for _ in range(int(input())):
    num = int(input())
    binary = bin(num)
    # print(binary)
    array = binary[2:].split("0")
    # print(array)
    array.sort(reverse=True)
    print(len(array[0]))