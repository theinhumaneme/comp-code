for tc in range(int(input())):
    n = int(input())
    text = input()
    answer = 0
    for i in range(n):
        pointer_1,pointer_2 = i,i
        while (pointer_1>=0 and pointer_2<n and text[pointer_1] == text[pointer_2]):
            pointer_1 = pointer_1-1
            pointer_2 = pointer_2+1
        answer = max(answer,pointer_2-pointer_1-1)
    for i in range(n):
        pointer_1,pointer_2 = i-1,i
        while (pointer_1>=0 and pointer_2<n and text[pointer_1] == text[pointer_2]):
            pointer_1 = pointer_1-1
            pointer_2 = pointer_2+1
        answer = max(answer,pointer_2-pointer_1-1)
    print(answer)