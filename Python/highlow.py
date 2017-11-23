number = 7
guess = int(input("Enter a number: "))
count = 1

while guess != number:
    if guess < number:
        print("Higher")
    elif guess > number:
        print("Lower")

    guess = int(input("Enter a number: "))
    count = count + 1


if count > 1:
    print("Correct guess after", count, "turns")
elif count == 1:
    print("Correct guess after 1 turn")
