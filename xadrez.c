#include <stdio.h>

int main () {

 int torre;

 for(torre = 0; torre < 5; torre++)
 {
    printf("Movendo a torre para a direita... \n");
 }

 int rainha = 0;

 while (rainha < 8)
 {
    printf("Movendo a rainha para esquerda... \n");
    rainha++;
 }

 int bispo = 0;

 do 
 {
    printf("Movendo o bispo para a diagonal direita...\n");
    bispo++;
 }
    while(bispo < 5);

 int cavalocima = 1;
 int cavalodireita = 1;

 for(cavalocima = 0; cavalocima < 1; cavalocima++){
    for(cavalodireita = 0; cavalodireita < 2; cavalodireita++){
      printf("Movendo o cavalo para cima... \n");
    }
    printf("Movendo o cavaldo para direita...\n");
 }
    
    return 0;
}