#https://leetcode.com/problems/minimum-number-of-operations-to-move-all-balls-to-each-box/

ball_boxes = list(map(int,list(input())))
# print(ball_boxes)
len_ball_boxes = len(ball_boxes)
final = [0]*len_ball_boxes
for slot in range(len_ball_boxes):
    if ball_boxes[slot] ==1:
        for i in range(len_ball_boxes):
            if slot-i ==0:
                continue
            else:
                final[i] = abs(slot-i)+final[i]
    else:
        pass
print(final)