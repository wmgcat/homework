class Turtle:
    def __init__(self, x, y, s):
        self.x, self.y, self.s = x, y, s
    
    def go_up(self, step=1):
        self.y += self.s * step
    
    def go_down(self, step=1):
        self.y -= self.s * step
    
    def go_left(self, step=1):
        self.x -= self.s * step
    
    def go_right(self, step=1):
        self.x += self.s * step
    
    def evolve(self):
        self.s += 1
    
    def degrade(self):
        if self.s <= 1:
            raise Exception("черепаха не может быть размером меньше 1")
        self.s -= 1
    
    def count_moves(self, x2, y2):
        dx, dy = abs(x2 - self.x), abs(y2 - self.y)

        if dx % self.s != 0 or dy % self.s != 0:
            return None
        if (dx // self.s + dy // self.s) % 2 != 0:
            return None
        return int(dx + dy) // self.s

turtle = Turtle(0, 0, 1)
try:
    turtle.evolve()
    print(turtle.count_moves(5, 5))
    turtle.degrade()
    turtle.degrade()
except Exception as err:
    print(err)