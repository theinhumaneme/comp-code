from re import M


def rotate90Clockwise(MATRIX):
    DIM = len(MATRIX[0])
    for i in range(DIM // 2):
        for j in range(i, DIM - i - 1):
            TEMP_VAR = MATRIX[i][j]
            MATRIX[i][j] = MATRIX[DIM - 1 - j][i]
            MATRIX[DIM - 1 - j][i] = MATRIX[DIM - 1 - i][DIM - 1 - j]
            MATRIX[DIM - 1 - i][DIM - 1 - j] = MATRIX[j][DIM - 1 - i]
            MATRIX[j][DIM - 1 - i] = TEMP_VAR

def printMatrix(MATRIX):
    DIM = len(MATRIX[0])
    for i in range(DIM):
        MATRIX[i] = map(str,MATRIX[i])
        print(' '.join(MATRIX[i]))

for _ in range(int(input())):
    print(f'Test Case #{_+1}:')
    DIM = int(input())
    MATRIX = list()
    for __ in range(DIM):
        MATRIX.append(list(map(int,input().strip().split(' '))))
    rotate90Clockwise(MATRIX)
    printMatrix(MATRIX)