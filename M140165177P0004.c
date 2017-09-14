/*
 * Linhas de livre preenchimento...
 *
 * Matr.: 14/0165177
 * Trab.: 0004
 *
 * Linhas de livre preenchimento...
 */

#include <stdio.h>
#include <math.h>

int main() {
        long long int posicao = 0, comando, um = 0, dois = 0, qtd1, qtd2;

        printf("Digite os comandos do veiculo:\n");

        scanf("%lld", &comando);
        while(comando != 0) {
                if ((comando == 1) || (comando == -1) || (comando == 2) || (comando == -2)) {
                        posicao += comando;
                        if((comando == 1) || (comando == -1)) {
                                um += comando;
                        }
                        if((comando == 2) || (comando == -2)) {
                                dois += comando/2;
                        }
                }
                scanf("%lld", &comando);
        }
        if (posicao == 0) {
                printf("Viagem terminada: veiculo na base\n");
                return 0;
        }
        printf("Piloto automatico ligado\n");

        qtd1 = fabs(um);
        qtd2 = fabs(dois);
        for (size_t i = 0; i < qtd1; i++) {
                if (um > 0) {
                        printf("-1\n");
                }
                if (um < 0) {
                        printf("1\n");
                }
        }
        for (size_t i = 0; i < qtd2; i++) {
                if (dois > 0) {
                        printf("-2\n");
                }
                if (dois < 0) {
                        printf("2\n");
                }
        }
        printf("Viagem terminada: veiculo na base\n");
        printf("Piloto automatico ligado durante %lld comandos\n", qtd1 + qtd2);

        return 0;
}
