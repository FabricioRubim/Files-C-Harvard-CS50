#include <stdio.h>

int main ()
{
    int horas = 2;
    const int minutos = 60;

    int converter = (horas * minutos);

    printf("São %i minutos\n", converter);
}
