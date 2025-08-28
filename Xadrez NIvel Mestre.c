// Desafio NIvel Mestre!

#include <stdio.h>

// Void do Bispo!

void Movimento1 (int c) {
    if (c < 2) {
        printf("Direita\n");
        Movimento1(c + 1);
    }
}

void Movimento2 (int B) {
    if (B < 2) {
        printf("Cima\n");
        Movimento2(B + 1);
    }
}

// Torre, Rainha, Bispo usando a recursividade no lugar dos loops!

void MovimentoTorre ( int t ) {
    if ( t <= 5) {
      printf("Direita\n");
        MovimentoTorre ( t + 1);
  }
}
void MovimentoBispo ( int b ) {
    if ( b <= 4) {
      printf("Diagonal\n");
        MovimentoBispo ( b + 1);
    }
}

void MovimentoRainha ( int r ) {
    if ( r <= 8) {
      printf("Esquerda\n");
        MovimentoRainha ( r + 1);
    }
}

  int main (){

int Torre = 1, Bispo = 1, Rainha = 1;

printf("Movimento da Torre:\n");
MovimentoTorre( Torre );
printf("\n\n");

printf("Movimento da Bispo:\n");
MovimentoBispo( Bispo );
printf("\n\n");

printf("Movimento da Rainha:\n");
MovimentoRainha( Rainha );
printf("\n\n");

// Cavalo de troia aplicar a estrutura aninha, multiplas variaveis com movimento 2x cima e 1x direita!

printf("Movimento do Cavalo de Troia:\n");

for ( int cavalo1 = 0, cavalo2 = 1; cavalo1 <= cavalo2; cavalo1++) continue;{ 
    for (int troia = 1; troia <= 2; troia++) {
       printf("Cima\n");
    } 
        printf("Direita\n");
            printf("\n\n");
}


// Bispo aplicar a recursividade e estrutura aninha o loop externo na vertical = 2x e no interno = 2x na horizontal!

int Bispo1 = 0;

printf("Movimento do Bispo Recursivo\n");
Movimento1 ( Bispo1 );
Movimento2 ( Bispo1 );
printf("\n\n");


    return 0;
}