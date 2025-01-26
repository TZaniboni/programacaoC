#include <stdio.h>

int main () {
    float temperatura, umidade;
    unsigned int estoque, estoqueMinimo = 1000;

    printf("entre com a temperatura\n");
    scanf("%f", &temperatura);

    printf("entre com a umidade\n");
    scanf("%f", &umidade);

    printf("entre com o estoque\n");
    scanf("%u", &estoque);

    if (temperatura > 30) {
        printf("Temperatura alta!\n");
    } else {
        printf("Temperatura normal\n");
    }


    if (umidade > 50) {
        printf("umidade alta\n");
    } else {
        printf("umidade baixa\n");
    }


    if (estoque < estoqueMinimo) {
        printf("estoque baixo\n");
    } else {
        printf("estoque alto\n");
    }


    return 0;



}