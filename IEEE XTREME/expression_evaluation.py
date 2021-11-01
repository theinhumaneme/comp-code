test_cases = int(input())
for _ in range(test_cases) :
    op=0
    dig=0
    expression = input()
    try:
        for char in expression:
            operators_check=['+','-','*']
            if char in operators_check:
                op=op+1
            elif char.isdigit():
                dig = dig+1
        if "()" in expression:
            print("invalid")
            break
        else:
            if dig>op:
                evaluation = eval(expression)
                if evaluation<0:
                    print(f"{evaluation%1000000007}")
                else:
                    print(evaluation)
            else:
                print("invalid")
    except:
        print("invalid")