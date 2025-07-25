#include <stdio.h>

int main() {
    char nomeDoHeroi [5] = "Sans";
    int nivel = 100;

    if (nivel < 1000)
    {
        printf("Ferro %i\n", nivel);
    }
    else if (nivel >= 1001 && nivel <= 2000) {
        printf("Bronze %i\n", nivel);
    }

    else if (nivel >= 2001 && nivel <= 5000) {
        printf("prata %i\n", nivel);
    }

    else if (nivel >= 5001 && nivel <= 7000) {
        printf("Ouro %i\n", nivel);
    }

    else if (nivel >= 7001 && nivel <= 8000)
    {
        printf("Platina %i\n", nivel);
    }
    
    else if (nivel >= 8001 && nivel <= 9000) {
        printf("Ascendente %i\n", nivel);
    }

    else if (nivel >= 9001 && nivel <= 10000) {
        printf("Imortal %i\n", nivel);
    }

    else if (nivel >= 10001) {
        printf("Radiante %i\n", nivel);
    }

    printf("O Heroi de nome: %s, está no nivel de %i ", nomeDoHeroi, nivel);

    return 0;
}