# verification_errreur
# bitparite.cpp
include<stdio.h>
typedef unsigned char OCTET;

OCTET Parite (OCTET);## fonction qui retourne un bytearray pair
void Affich (OCTET); ## fonction qui retourne un bytearray impair
int saisie (void); ##saisie du nombre entier

int main (void)
{
    OCTET mot;
    mot = saisie();
    Affich(mot);
    mot = Parite(mot);
    Affich(mot);
  
    return 0;
}

# la conversion de la parite
# fonction qui retourne un bytearray pair
OCTET Parite (OCTET cara)
{
    int count,nb = 0; ## la fonction count compte les elements dans un array
    OCTET masque = 0x01;
    for(count=0; count<7; count++)
    {
        if(cara & masque)
            nb++;
        masque <<=1;
    }
    if (nb%2 != 0)
        cara = cara  | 0x80;
    return cara;

}
# fonction qui retourne un bytearray impair
void Affich (OCTET mot)
{
     int i;
     char tab[8];
     for(i=0; i<8; i++)
     {
         tab[7-i] = mot%2;
         mot >>=1;
     }
     for(i=0; i<8; i++)
         printf("%d",tab[i]);
     puts("");
}
# saisie d'un entier
int saisie (void)
{
    int c;
           
            printf("\n veuillez entrer un entier : ");
            scanf("%d",&c);
    puts("");
    return c;
}

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

