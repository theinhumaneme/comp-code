for test in range(int(input())):
    number = input()
    number_rev=[number[len(number)-1-i] for i in range(len(number))]
    print(int(''.join(number_rev)))