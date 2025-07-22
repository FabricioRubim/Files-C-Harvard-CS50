#include<stdio.h>
#include<string.h>
#include<stdbool.h>

int main() {
    char celular[100] = "SamsungJ4";
    float versao = 8.0;
    char cor[90] = "Preto";
    bool desbloqueado = false;

    printf("Celular: %s\n", celular);
    printf("Versão: %.1f\n", versao); // imprime um float com 1 casa decimal
    printf("Cor: %s\n", cor);
    printf("Status: %s\n", desbloqueado ? "Desbloqueado" : "Bloqueado");
}