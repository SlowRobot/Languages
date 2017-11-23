def rectangle():
    width = float(input("Enter width: "))
    height = float(input("Enter height: "))
    area = width * height
    print("The area of the rectangle is", area)

def square():
    side = float(input("Enter the side length: "))
    area = side ** 2
    print("The area of the square is", area)

def circle():
    radius = float(input("Enter the radius: "))
    area = 3.14 * (radius ** 2)
    print("The area of the circle is", area)

def printmenu():
    print("MENU")
    print()
    print("    r - Find the area of a rectangle")
    print("    s - Find the area of a square")
    print("    c - Find the area of a circle")
    print("    q - Quit")

choice = "p"

while choice != "q":
    if choice == "r":
        rectangle()
    elif choice == "s":
        square()
    elif choice == "c":
        circle()
    print()
    printmenu()
    print()
    choice = input("Choice: ")
