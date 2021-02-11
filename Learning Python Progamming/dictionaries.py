# When creating dictionaries, put it in curly brackets
monthConversions = {
    "Jan": "January",
    "Feb": "February",
    "Mar": "March",
    "Apr": "April",
    "May": "May",
    "Jun": "June",
    "Jul": "July",
    "Aug": "August",
    "Sep": "September",
    "Oct": "October",
    "Nov": "November",
    "Dec": "December",
}

# This is one way to refer to a key in a dictionary
print(monthConversions["Nov"])

# .get()
print(monthConversions.get("Dec"))

# If you try to print out something that is not in the dictionary, you can do this, otherwise
# it will say None
print(monthConversions.get("Luv", "Not a valid key"))
