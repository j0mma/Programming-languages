# allows to use the sys module 
from sys import argv

# define script and filename as command line arguments
script, filename = argv

# open returns a value (file handle) which is stored in the txt variable
txt = open(filename)

# prints the file name
print(f"Here's your file {filename}:")

# prints the content of the txt variable (a file handle) by using the read function 
print(txt.read())
txt.close()

# prints some text
print("Type the filename again:")

# store the input text as a file name 
file_again = input("> ")

# defines txt_again as a file handle for the  file with the name stored in file_again
txt_again = open(file_again)

# prints the contents of the txt_again file handle
print(txt_again.read())
txt_again.close()
