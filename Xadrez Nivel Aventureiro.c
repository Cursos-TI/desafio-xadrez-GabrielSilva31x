// Desafio Nivel Aventureiro!

 #include <stdio.h>

     int main () {

// Mover a Torre na horizontal 5x casas para Direita

    int torre = 1;

    printf("Peça-Torre:\n\n");

    do {

        printf("A Torre Moveu-se %d Casa para direita...\n", torre);
           torre++;

    } while (torre <= 5);

    printf("\n\n");

// Mover o Bispo na diagonal 2x para cima e 2x esquerda!

    printf("Peça-Bispo:\n\n");

    for ( int Bispo = 1; Bispo <= 4; Bispo++) {
        printf("O Bispo moveu-se %d casa na diagonal...\n", Bispo);
    }
    printf("\n\n");

// Mover a Rainha na horizontal 8x para esquerda!

    int Rainha = 1;

    printf("Peça-Rainha:\n\n");

    while ( Rainha <= 8 ) {
        printf("A Rainha Moveu-se %d casa para Esquerda...\n", Rainha);
           Rainha++;
    } 
    printf("\n\n");

// Movendo o Cavalo de troia 3x Baixo e 1x para Esquerda!

    for ( int Cavalo = 0; Cavalo <= 1; Cavalo++) {

        int Troia = 1;
        
        while ( Troia <= 3 ){
            printf("Baixo\n");
              Troia++;
        }
        printf("Esquerda\n");
          Cavalo++;
    }

        return 0;
}