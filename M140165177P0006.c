/*
 * Linhas de livre preenchimento...
 *
 * Matr.: 14/0165177
 * Trab.: 0006
 *
 * Linhas de livre preenchimento...
 */
#include <stdio.h>
#include <math.h>
typedef long long int llt;

int main()
{
        int H,W;
        do {
          printf("Tamanho do gato esperto: ");
          scanf("%d", &H);
        } while(H < 0);

        do {
          printf("Quantidade de gatos trabalhadores: ");
          scanf("%d", &W);
        } while(W <= 0);

        while ((H || W) > 0) {
                if (!H && !W) break;

                double C = log(H) / log(W);

                int L = 1, R = 2147483645, mid = (L + R)/2;
                while (L != R) {
                        if (log(mid+1) / log(mid) - C > 0.000000000001) L = mid+1;
                        else if (log(mid+1) / log(mid) - C < -0.000000000001) R = mid;
                        else break;
                        mid = (L + R) / 2;
                }
                int N = mid;
                int k = round (log(H) / log(N+1));

                llt notWorking = 0;
                llt totalHeight = 0;
                W = 1;
                for (int i = 0; i < k; i++) {
                        notWorking += W;
                        totalHeight += (H * W);
                        W *= N;
                        H /= (N+1);
                }
                printf("Quantidade de gatos que nao trabalham: %lld\n",notWorking);
                printf("Tamanho total dos gatos: %lld\n",totalHeight+(H * W));
                printf("\n");


                do {
                  printf("Tamanho do gato esperto: ");
                  scanf("%d", &H);
                } while(H < 0);
                if (H == 0) {
                  break;
                }

                do {
                  printf("Quantidade de gatos trabalhadores: ");
                  scanf("%d", &W);
                } while(W <= 0);
        }
        printf("Fim de programa\n");
        return 0;
}
