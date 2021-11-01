test_cases = int(input())
for case in range(test_cases):
    len_array= int(input())
    splitted_string=input().rstrip().lstrip()
    array = list(map(int,splitted_string.split(' ')))
    numbers = dict()
    for num in array:
        if num not in numbers:
            numbers.update({num:1})
        elif num in numbers:
            numbers.update({num:(numbers.get(num)+1)})
    values = []
    for key,value in numbers.items():
        if value>1:
            values.append(key)
        else:
            pass
    values = list(map(str,sorted(values)))
    output = ' '.join(values)
    print(output)