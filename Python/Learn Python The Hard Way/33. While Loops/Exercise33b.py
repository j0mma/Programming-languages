print("Insert the max number")
max_number = int(input("> "))
print("Insert the increment")
increment_number = int(input("> "))

numbers = []

def adding_numbers(number, increment):
    i = 0
    while i < number:
        print(f"At the top i is {i}")
        numbers.append(i)

        i = i + increment
        print("Numbers now: ", numbers)
        print(f"At the bottom i is {i}")

adding_numbers(max_number, increment_number)

print("The numbers: ")

for num in numbers:
    print(num)

