my_list = [0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16]

def recursive(list, offset=0):
	print(list[offset])
	if offset + 1 < len(list):
		recursive(list, offset + 1)

recursive(my_list)