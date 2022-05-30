// Implemente uma função que calcule a área da superfície e o volume de uma esfera de
// raio R. Essa função deve obedecer ao protótipo:
// void calc_esfera(float R, float *area, float *volume)
// A área da superfície e o volume são dados, respectivamente, por:
// A = 4 * pi * R2
// V = 4/3 * pi * R3

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
float pi = 3.14;

void calc_esfera(float R, float *area, float *volume)
{
    *area = 4 * pi * pow(R, 2);
    *volume = (4 / 3) * pi * pow(R, 3);
}

int main()
{

    float R, area, volume;

    printf("Informe o tamanho do raio:\n");
    scanf("%f", &R);

    calc_esfera(R, &area, &volume);

    printf("Valor da area: %.2f\n", area);
    printf("Valor do volume: %.2f\n", volume);

    system("pause");
}