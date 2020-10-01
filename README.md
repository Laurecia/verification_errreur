# verification_errreur
# bitparite.cpp 
cette fonction "bytearray" permet de 

 -Calculer le bit de parité qui retourne un bytearray pair
 - Calculer le bit de parité qui retourne un bytearray impair
 
 ## pour executer cette fonction dans un terminal il faut taper la commande
 -gcc bitparite.cpp -o biparite
 -./bitparite
 -le code vous demande d'entrer un entier 
 -apres avoir entrer un entier nous avons le bit de parite paire d'indice zero 
 -et un autre bit de parite impaire d'indice 1

# checksum.py

#!/usr/bin/python3
## le tableau checksum1
def asciiLetters(value) :
    checksum1 = 0
    checksum2 = 0 
    for i in value :
    		## ord() retourne la valeur acsii
        print("Lettre : ", i," = ",ord(i))
        checksum1 += ord(i)
    print(checksum1)

    return checksum1
## le tableau checksum2
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
    ## saisie des lettres 

asciiLetters("network")
print("====")
asciiLetters2("network")
## pour executer ce script python 
-python3 checksum.py

