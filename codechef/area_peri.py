len = int(input())
bred = int(input())
if (len*bred > 2*(len+bred)):
    print("Area")
elif (len*bred < 2*(len+bred)):
    print("Peri")
else:
    print("Eq")

if (len*bred > 2*(len+bred)):
    print(2*(len+bred))
elif (len*bred > 2*(len+bred)):
    print(len*bred)
