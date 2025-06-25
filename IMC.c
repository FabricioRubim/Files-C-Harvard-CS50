#include <stdio.h>

int main()
{
    int p = 90;
    float a = 1.84;
    float imc =   p / (a * a);
    
    if (imc < 16.9)
    {
        printf("Muito abaixo do peso\n%f", imc);
    }
    else if (imc <= 18.4)
    {
        printf("Abaixo do peso\n%f", imc);
    }
    else if(imc <= 24.9)
    {
        printf("Peso normal\n%f", imc);
    }
    else if (imc <= 29.9)
    {
        printf("Acima do peso\n%f", imc);
    }
    else if (imc <= 34.9)
    {
        printf("Obesidade grau I\n%f", imc);
    }
    else if (imc <= 40) {
        printf("Obesidade grau II\n%f", imc);
    }
    else
    {
        printf("Obesidade grau III\n%f", imc);
    }
    return 0;
}

