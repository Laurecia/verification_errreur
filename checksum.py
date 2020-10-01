#!/usr/bin/python3
def asciiLetters(value) :
    checksum1 = 0
    checksum2 = 0 
    for i in value :
        print("Lettre : ", i," = ",ord(i))
        checksum1 += ord(i)
    print(checksum1)

    return checksum1

def asciiLetters2(value) :
    checksum2 = 0
    for i in value :
        if checksum2 == 0:
            checksum2 = ord(i)
        else :
            print("checksum2 : ", checksum2 + ord(i))
            checksum2 += ord(i) + checksum2
    
    print(checksum2)

    return checksum2

asciiLetters("network")
print("====")
asciiLetters2("network")


