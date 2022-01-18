class StackSelf(list):
    def __int__(self):
        super().__init__()

    def push(self, value: int):
        self.append(value)
        # return value

    def pop_element(self):
        if len(self) == 0:
            print("Empty")
        else:
            print(self.pop(len(self)-1))


stack = StackSelf()
for tc in range(int(input())):
    values = input().split(' ')
    if values[0] == 'push':
       stack.push(int(values[1]))
    elif values[0] == 'pop':
        stack.pop_element()
