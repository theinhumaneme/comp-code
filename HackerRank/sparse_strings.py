size = int(input())
given_strings=[]
for ele in range(size):
    given_strings.append(input())
query_strings=[]
for ele in range(int(input())):
    query_strings.append(input())

# elements = """"""

for ele in query_strings:
    # elements=elements+str(given_strings.count(ele))+" "
    print(given_strings.count(ele))
# print(elements)
