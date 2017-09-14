#include <stdio.h>

int main(void) {

        long long unsigned int n;
        printf("Digite um número natural qualquer para transformarmos em 1.\n");
        scanf("%llu", &n);     // pega um número n
        if(n != 1) {
                do {
                        if (n % 2 == 0) {     // verifica se n é par
                                printf("%llu é par. dividindo por 2\n", n);
                                n = n / 2;     // pega n e divide por 2
                        } else if (n % 2 != 0) {     // verifica se n é ímpar
                                printf("%llu é ímpar. multiplicando por 3 e somando 1\n", n);
                                n = 3 * n + 1;     // pega n, multiplica por 3 e soma 1
                        }
                } while (n != 1);     // enquanto n for diferente de 1, executa o loop
        }
        printf("%llu é igual a 1\n", n);
}
