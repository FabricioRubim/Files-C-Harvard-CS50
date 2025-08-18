#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    printf("Inicio do programa\n");

    // Array em C
    char *membrosDoDiscord[] = {"Arki", "Floppa", "Manoel", "Val", "Sayle", "Huna", "RHW", "Marcos", "Void", "Konie/matheus", "Gou", "Lunny"};
    char *callDoDiscord[] = {"Gou", "Huna", "Manoel", "Val", "Lunny", "Void"};

    for (char i = 0; i < 6; i++)
    {
        printf("Quais sao os membros na call do salao? %s\n", callDoDiscord[i]);
    }

    for (char i = 0; i < 11; i++)
    {
        printf("Discord do Arki e seus membros: %s\n", membrosDoDiscord[i]);
    }

    printf("Fim do programa\n");

    return 0;
}