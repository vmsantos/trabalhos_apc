/*
 * Linhas de livre preenchimento...
 *
 * Matr.: 14/0165177
 * Trab.: 0005
 *
 * Linhas de livre preenchimento...
 */

#include <stdio.h>
#include <math.h>

int main() {
        int n;
        printf("Digite a quantidade de cocos: ");
        scanf("%d", &n);
        while(n > 0) {
                printf("%d cocos, ", n);
                int sol = 0, i, j;
                int sq = (int)sqrt(n)+1;
                for(i = sq; i >= 2; i--) {
                        int ans = n;
                        for(j = 1; j <= i; j++) {
                                if(ans%i != 1)
                                        break;
                                ans = ans - ans/i - 1;
                        }
                        if(j == i+1 && ans%i == 0) {
                                sol = 1;
                                printf("%d pessoas e 1 macaco\n", i);
                                break;
                        }
                }
                if(!sol) {
                        printf("sem solucao\n");
                }
                printf("Digite a quantidade de cocos: ");
                scanf("%d", &n);
        }
        printf("fim de programa\n");
        return 0;
}
