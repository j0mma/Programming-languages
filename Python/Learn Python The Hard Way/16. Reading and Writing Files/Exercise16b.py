# script to open a file given by the user as an argument
from sys import argv

script, filename = argv

target = open(filename)

print(f"Content of {filename}")
print("*" * 80)
print(target.read())
