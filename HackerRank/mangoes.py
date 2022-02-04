class StackSelf(list):
    def __init__(self):
        super().__init__()
        self.max = 0

    def push(self, value: int):
        self.append(value)
        # print(value)
        if self.max < value:
            self.max = value
        # return value

    def pop_element(self):
        if len(self) == 0:
            print("Empty")
        else:
            self.pop(len(self)-1)


for tc in range(int(input())):
    print(f"Case {tc+1}:")
    stack = StackSelf()
    for ques in range(int(input())):
        values = input().split(' ')
        if values[0] == 'A':
            stack.push(int(values[1]))
        elif values[0] == 'R':
            stack.pop_element()
        elif values[0] == "Q":
            print(stack.max)
