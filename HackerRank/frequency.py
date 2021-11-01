
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
# for key,value in numbers.items():
#     if value>1:
#         values.append(key)
#     else:
#         pass
# values = list(map(str,sorted(values)))
# output = ' '.join(values)
# print(output)
queries = int(input())
for _ in range(queries):
    query = int(input())
    if numbers.get(query) is not None:
        print(f"{numbers.get(query)}")
    else:
        print('0')