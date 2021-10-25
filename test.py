test_cases = int(input())
for case in range(test_cases):
    random_shit = list(map(int,input().split(" ")))
    words = list()
    for _ in range(random_shit[0]):
        words.append(input())
    # print(words)
    combinations=list()
    for _ in range(len(words)):
        combo=list()
        print('for')
        offset = _
        while offset < len(words):
            print('while')
            try:
                combo.append(words[offset])
            except:
                pass
            offset = offset+random_shit[1]
        combinations.append(combo)

print(combinations)
set_list = set(combinations)
final_list = list(set_list)
print(len(final_list))
