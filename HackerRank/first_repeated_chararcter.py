test_cases = int(input())
for tc in range(test_cases):
    string = input()
    flag=0
    keep_track = dict()
    for char in string:
        if char in keep_track:
            keep_track.update({char:(keep_track.get(char)+1)})
        else:
            keep_track.update({char:1})
    for key,value in keep_track.items():
        if value >1:
            print(key)
            flag = 1
            break
    if flag == 0:
        print('.')