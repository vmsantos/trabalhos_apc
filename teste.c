#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main(void) {
        long long unsigned int n;
begin:
        printf("Escolha um número natural qualquer.\nCaso insira um número negativo, usaremos o valor absoluto dele.\nNão escolha um número muito grande.\nPara parar o programa, pressione ctrl+c\n\n");
get:
        scanf("%llu", &n);
        n = abs(n);


        if (n > 1000000) {
                printf("Número escolhido é grande demais. Escolha outro número.\n");
                goto get;
        }
        if (n == 0) {
                printf("0 não vale!\nEscolha outro número\n");
                goto get;
        }
loop:
        if (n != 1) { //verifica se n é diferente de 1
                if (fmod(n, 2) == 0) { //verifica se n é par
                        printf("%llu é par. dividindo por 2\n\n", n);
                        n = n / 2; //divide n por dois
                        goto loop; //volta
                }
                else if (fmod(n, 2) != 0) { //verifica se n é ímpar
                        printf("%llu é ímpar. multi. por 3 e somando 1.\n\n", n);
                        n = 3*n + 1; //multiplica por 3 e soma 1
                        goto loop; //volta
                }
        }
        printf("%llu é igual a 1\n", n);

        goto begin;
}
