
#include<stdio.h>
typedef unsigned char OCTET;

OCTET Parite (OCTET);
void Affich (OCTET);
int saisie (void);

int main (void)
{
    OCTET mot;
    mot = saisie();
    Affich(mot);
    mot = Parite(mot);
    Affich(mot);
  
    return 0;
}

//la conversion de la parite
OCTET Parite (OCTET cara)
{
    int count,nb = 0;
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
//affichage
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
//saisie
int saisie (void)
{
    int c;
           
            printf("\n veuillez entrer un entier : ");
            scanf("%d",&c);
    puts("");
    return c;
}
