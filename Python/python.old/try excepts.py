#The try keyword lets you try a block of code for errors
#The except keyword lets you handle the error like shown below
try:
	answer = 10 / 0
	number = int(input("Enter a number: "))
	print(number)
#Will catch the ZeroDivisionError which is caused when
#you divide something by 0
#You can also store error as a variable
except ZeroDivisionError as err:
	print(err)
#Will catch the ValueError which is caused when you input
#the wrong type of value
except ValueError:
	print("Invalid Input")