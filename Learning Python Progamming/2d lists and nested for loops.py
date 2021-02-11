#You can make arrays in arrays!!! :O
number_grid = [
	[1, 2, 3], #Row 0
	[4, 5, 6], #Row 1
	[7, 8, 9], #Row 2
	[0]        #Row 3
]

print(number_grid[0][0]) #How to acsess the value in the 2D List

for row in number_grid:
	for col in row:
		print(col)