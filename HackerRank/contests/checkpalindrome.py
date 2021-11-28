for _ in range(int(input())):
    len = int(input())
    string = input()
    rev_string = str()
    for i in range(len):
        rev_string = rev_string + string[len-1-i]
    # print(rev_string)
    if string == rev_string:
        print("Yes")
    else:
        print("No")