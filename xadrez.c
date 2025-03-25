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
    
    return 0;
}