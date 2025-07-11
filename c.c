#include <stdio.h>
#include <stdlib.h>

int main() {
    char Player[50];
    int XP;
    char *Rank; 
// temos que declarar as var
printf("Entre o seu nome de Hero:");
scanf("%s",&Player);
printf("Quanto de XP foi adquirida? XP:");
scanf("%i",&XP);
//aqui deixei o user atribuir o valor das var

    if (XP < 1000) {
        Rank = "Ferro"; 
    } else if (XP >= 1001 && XP <= 2000) {
        Rank = "Bronze";
    } else if (XP >= 2001 && XP <= 5000) {
        Rank = "Prata";
    } else if (XP >= 5001 && XP <= 7000) {
        Rank = "Ouro";
    } else if (XP >= 7001 && XP <= 8000) {
        Rank = "Platina";
    } else if (XP >= 8001 && XP <= 9000) {
        Rank = "Ascendente";
    } else if (XP >= 9001 && XP <= 10000) {
        Rank = "Imortal";
    } else {
        Rank = "Radiante";
    }

    printf("O Hero de nome **%s** esta no nivel de **%s**\n", Player, Rank);
// printf vs console.log haha
     system("pause");

}