username = input()
# print(list(username))
# if list(set(username)) == list(username):
if len(list(set(username)))%2==0:
    print("CHAT WITH HER!")
else:
    print("IGNORE HIM!")