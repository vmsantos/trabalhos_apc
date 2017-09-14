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
#define ERRO 1e-8
typedef long long int llt;

int main() {
        llt H, num, m, N;

        do {printf("Tamanho do gato esperto: ");
            scanf("%lld", &H); } while(H <= 0);

        do {printf("Quantidade de gatos trabalhadores: ");
            scanf("%lld", &num); } while(num <= 0);

        while (1) {
                m = 1;
                while( H != (int)(pow(pow(num,1.0/m)+1.0, m)+ERRO) ) m++;
                N = (int)(pow(num,1.0/m)+ERRO);
                if( N != 1 ) printf( "Quantidade de gatos que nao trabalham: %lld\nTamanho total dos gatos: %lld\n", (1-num)/(1-N), (H-num)*N+H );
                else printf( "else %lld %lld\n", m, (H-num)*N+H );

                printf("Tamanho do gato esperto: ");
                scanf("%lld", &H);
                if(H <= 0) break;
                do {printf("Quantidade de gatos trabalhadores: ");
                    scanf("%lld", &num); } while(num <= 0);
        }

        printf("Fim de programa\n");

        return 0;
}
