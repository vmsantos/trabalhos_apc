/*
 * Linhas de livre preenchimento...
 *
 * Matr.: 14/0165177
 * Trab.: 0003
 *
 * Linhas de livre preenchimento...
 */

#include <stdio.h>

int main() {
        long long int posicao = 0, comando;
        printf("Digite os comandos do veiculo:\n");
        while (scanf("%lld", &comando) == 1) {
                if ((comando == 1) || (comando == -1) || (comando == 2) || (comando == -2)) {
                        posicao += comando;
                }
                else if (comando == 0) {
                        if (posicao == 0) {
                                printf("O veiculo fez um caminho fechado\n");
                        } else {
                                printf("O veiculo fez um caminho aberto\n");
                        }
                        return 0;
                }
        }
}
