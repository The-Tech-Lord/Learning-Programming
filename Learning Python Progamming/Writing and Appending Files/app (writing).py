#When you write to a file, it will override everything in it
#You can create a new file too!
employee_file = open("employees1.txt", "w")

employee_file.write("\nKelly - Customer Service")

employee_file.close()