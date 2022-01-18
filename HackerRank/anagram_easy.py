for tc in range(int(input())):
    word1, word2 = list(input().split(' '))
    # print(word1,word2)
    if len(word1) != len(word2):
        print('False')
        pass
    else:
        flag =0
        word1=sorted(word1)
        word2=sorted(word2)
        for _ in range(len(word1)):
            if word2[_] == word1[_]:
                pass
            else:
                flag = 1
                break
        if flag == 1:
            print("False")
        else:
            print("True")
