# Variable to store the number of types of people
types_of_people = 10

# string formatted with the variable types_of_people
x = f"There are {types_of_people} types of people."

binary = "binary"
do_not = "don't"

# string formatted with two other string litterals
y = f"Those who know {binary} and those who {do_not}."

# printing the previously formatted strings 
print(x)
print(y)

# printing a formatted string with some string litterals variables
print(f"I said: {x}")
print(f"I also said: '{y}'")

# defining a boolean variable
hilarious = False

# formating the string with empty braces
joke_evaluation = "Isnt't that joke so funny! {}"

# printinf a formatted string with the .format() method
print(joke_evaluation.format(hilarious))

w = "This is the left side of..."
e = "a string with a right side."

# concatenating two strings with the + operator
print(w + e)

