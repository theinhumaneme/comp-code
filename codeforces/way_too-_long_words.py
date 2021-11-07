for test in range(int(input())):
    string = input()
    if len(string)>10:
        print(string[0]+f"{len(string)-2}"+string[-1])
    else:
        print(string)