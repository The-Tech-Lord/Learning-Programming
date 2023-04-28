#r - read only, w = can change the file, a = append (Can only add, can't really change the file), r+ = read and write
#-------------------------------------\/
employee_file = open("employees.txt", "r")

#readable() = booleen to see if a file is readable
#read() = will read the file
#readline() = will read a single line
print(employee_file.readline())
print(employee_file.readline()) #Pretty straight foward here

#You can also refer to its index
print(employee_file.readlines()[1]) #Will put it in a list
#closes the file
employee_file.close()