a = 0
b = 1
count = 0
max = 20

while count < max:
    count = count + 1
    print(a, end = " ")
    old = a
    a = b
    b = old + b
print()
