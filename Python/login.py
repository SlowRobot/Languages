username = input("Username: ")
password = input("Password: ")
command = str()
name = str()
code = str()

while command != "lock":
    command = input("Command: ")

while name != username:
    name = input("Username: ")

while code != password:
    code = input("Password: ")

print("Unlocked")
