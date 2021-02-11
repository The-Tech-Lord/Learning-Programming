#It doesn't matter what type of data you put in these arrays
friends = ["Kevin", "Karen", "Jim", "Jim", "Oscar", "Bob"]
print(friends[0]) #You refer to data like this; You can also go backwards using negatives
print(friends[1:]) #This will print out all the data starting at 1 and forwards
print(friends[1:3]) #This will print all the values from 1-2 since it doesn't include three

#You can also change data by doing this
friends[1] = "Ryan"
print(friends[1])

#----------------------------------------------------
#You can combine lists together!!
lucky_numbers = [4, 6 ,7, 2, 9, 10]
friends.extend(lucky_numbers)
print(friends)

#You can also add stuff to a list
friends.append("Criss")
print(friends)

#You can also insert a value a certain index (Will not replace the current value in that index)
friends.insert(1, "Kelly")
print(friends)

#You can also remove values (If you want to clear the whole list, use clear() , If you want to take a value off of the end of the list, use pop() )
friends.remove("Kelly")
print(friends)

#If you want to get the index of a value
print(friends.index("Kevin"))

#You can print out how many of the same value show up in a list
print(friends.count("Jim"))

#If you want to print it out in alphabetacal/numerical order, use list_name.sort()
#If you want to reverse a list, use list_name.reverse()
friends.reverse()
print(friends)

#You can also copy stuff to another list
friends2 = friends.copy()
friends2.reverse() #Had to get it back in original form, you don't have to do this
print(friends2)