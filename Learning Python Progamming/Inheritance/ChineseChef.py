from Chef import Chef
#This is how you can use inheritance
class ChineseChef(Chef): #The Chef Class

	#If you need to override something, you can just do something like this
	def make_special_dish(self):
		print("The chef makes orange chicken")

	def make_fried_rice(self):
		print("The chef makes fried rice")