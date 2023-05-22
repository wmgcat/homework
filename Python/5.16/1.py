class Cassa:
	def __init__(self):
		self.count = 0;
	
	def top_up(self, x):
		self.count += x
		print(self.count)
	
	def count_1000(self):
		return int(self.count / 1000)

	def take_away(self, x):
		if x > self.count:
			raise Exception("недостаточно денег в кассе")
		self.count -= x
		print(self.count)

cassa = Cassa()

try:
	cassa.top_up(4800)
	cassa.top_up(500)
	print(cassa.count_1000())
	cassa.take_away(1000)
	cassa.take_away(6000)
except Exception as err:
	print(err)