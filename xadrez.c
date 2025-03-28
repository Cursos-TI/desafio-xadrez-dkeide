#include <stdio.h>

void movertorre (int casas){
    if (casas > 0) {
        printf("Movendo a torre para a direita... \n");

   movertorre(casas -1);
    }
}

int main () {

    movertorre(5);


    void moverrainha (int casas){
    if (casas > 0) {
       printf("Movendo a rainha para esquerda... \n");
        
       moverrainha(casas -1);
    }
 }  
    moverrainha(8);

    void moverbispo (int casas){
        if (casas > 0) {
            printf("Movendo o bispo para a diagonal direita...\n");
            
           moverbispo(casas -1);
      }
 }  
    moverbispo(5);

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
  