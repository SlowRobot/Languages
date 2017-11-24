def factorial(n):
    if n <= 1:
        return 1
    return n * factorial(n-1)

def countdown(n):
    print(n, end = " ")
    if n > 0:
        countdown(n-1)

num = int(input("Enter your number: "))

print(factorial(num))
countdown(num)
print()
