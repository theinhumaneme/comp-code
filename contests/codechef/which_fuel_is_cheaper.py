for test in range(int(input())):
    array = list(map(int,input().split(' ')))
    petrol_base = array[0]
    diesel_base = array[1]
    petrol_price =petrol_base
    diesel_price = diesel_base
    for month in range(array[4]):
        petrol_price = petrol_price + array[2]
        diesel_price = diesel_price + array[3]
    if petrol_price==diesel_price:
        print("SAME PRICE")
    elif petrol_price >diesel_price:
        print("DIESEL")
    elif diesel_price>petrol_price:
        print("PETROL")