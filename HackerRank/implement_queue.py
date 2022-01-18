class QueueSelf(list):
    def __int__(self):
        super().__init__()

    def enqueue(self, value: int):
        self.insert(0,value)
        # return value

    def dequeue(self):
        if len(self) == 0:
            print("Empty")
        else:
            print(self.pop(len(self)-1))


queue = QueueSelf()
for tc in range(int(input())):
    values = input().split(' ')
    if values[0] == 'Enqueue':
       queue.enqueue(int(values[1]))
    elif values[0] == 'Dequeue':
        queue.dequeue()
