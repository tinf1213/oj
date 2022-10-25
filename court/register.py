print("輸入手機號碼:")
usr = input()
print("輸入密碼:")
pswd = input()

if(path.exists("user") == False):
    with open("user", 'w') as file:
        file.write(usr + ',' + pswd)
        file.write("\n")
else:
    file = open("user", "a")
    file.write(usr + ',' + pswd)
    file.write("\n")