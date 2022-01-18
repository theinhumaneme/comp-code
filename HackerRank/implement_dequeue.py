class QueueSelf(list):
    def __init__(self):
        super().__init__()
        self.length = len(self)

    def status(self):
        print(self)

    def enqueue(self, value: int, index: int):
        if index == 1:
            self.append(value)
        else:
            self.insert(index, value)
        # return value

    def dequeue(self, index: int):
        if len(self) == 0:
            print("Empty")
        else:
            print(self.pop(index))


queue = QueueSelf()
for tc in range(int(input())):
    # queue.status()
    values = input().split(' ')
    if values[0] == 'push_back':
        queue.enqueue(int(values[1]), index=0)
    elif values[0] == 'pop_front':
        queue.dequeue(index=queue.length - 1)
    if values[0] == 'push_front':
        queue.enqueue(int(values[1]), index=1)
    elif values[0] == 'pop_back':
        queue.dequeue(index=0)
