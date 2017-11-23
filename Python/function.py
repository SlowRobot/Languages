a = 23
b = -23

def abs(n):

    if n < 0:
        n = -n
    return n

if abs(a) == abs(b):
    print("The absolute value of", a, "and", b, "are equal")
else:
    print("The absolute value of", a, "and", b, "are not equal")
