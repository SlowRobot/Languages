number = int(input("Number\n"))

if ((number % 3 == 0) & (number % 5 == 0)):
    print("fizzbuzz!")
elif (number % 3 == 0):
    print("fizz")
elif (number % 5 == 0):
    print("buzz")