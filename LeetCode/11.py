class ParkingSystem:

    def __init__(self, big: int, medium: int, small: int):
        # self.big_limit = big
        # self.medium_limit = limit
        # self.small_limit = small
        self.parking_limit = [big,medium,small]
        self.parking=[0,0,0]

    def addCar(self, carType: int) -> bool:
        if (self.parking[carType-1] < self.parking_limit[carType-1]) and self.parking_limit[carType-1] > 0:
            self.parking[carType-1]+=1
            return True
        else:
            return False


# Your ParkingSystem object will be instantiated and called as such:
# obj = ParkingSystem(big, medium, small)
# param_1 = obj.addCar(carType)