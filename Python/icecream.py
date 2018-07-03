name = input("What is your name?\n")
icecream = input("What is your favourite icecream?\n")
m1 = int(input("What is first mark?\n"))
m2 = int(input("What is second mark?\n"))
m3 = int(input("What is third mark?\n"))
m4 = int(input("What is fourth mark?\n"))

ave = str((m1 + m2 + m3 + m4) / 4)

print("Hello! My Name is " + name + " my favourite ice cream is " \
         + icecream +". I am expecting to get a term WAM of " + ave + ".")