# Variable to store the number of cars
cars = 100

# Variable to store the available seats in a car
space_in_a_car = 4.0

# Variable to store the number of drivers
drivers = 30

# Variable to store the number of passengers
passengers = 90

# Variable to store the number of empty cars
cars_not_driven = cars - drivers

# Variable to store the number of used cars
cars_driven = drivers

# Variable to store the number of total space available
carpool_capacity = cars_driven * space_in_a_car

# Variable to store the average number of passenger per car
average_passengers_per_car = passengers / cars_driven


print("There are", cars, "cars available.")
print("There are only", drivers, "drivers available.")
print("There will be", cars_not_driven, "empty cars today.")
print("We can transport", carpool_capacity, "people today.")
print("We have", passengers, "to carpool today.")
print("We need to put about", average_passengers_per_car, 
      "in each car.")

