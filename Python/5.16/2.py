class Turtle:
    def __init__(self, x, y, s):
        self.x, self.y, self.s = x, y, s
    
    def go_up(self):
        self.y += self.s
    
    def go_down(self):
        self.y -= self.s
    
    def go_left(self):
        self.x -= self.s
    
    def go_right(self):
        self.x += self.s
    
    def evolve(self):
        self.s += 1
    
    def degrade(self):
        if self.s <= 1:
            raise Exception("черепаха не может быть размером меньше 1")
        self.s -= 1
    
    def count_moves(self, x2, y2):
        return int(abs(x2 - self.x) / self.s + abs(y2 - self.y) / self.s)

turtle = Turtle(0, 0, 1)
try:
    turtle.go_right()
    turtle.evolve()
    print(turtle.count_moves(5, 5))
    turtle.degrade()
    turtle.degrade()
except Exception as err:
    print(err)