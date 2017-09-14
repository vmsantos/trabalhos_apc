/*
 * Linhas de livre preenchimento...
 *
 * Matr.: 14/0165177
 * Trab.: 0001
 *
 * Linhas de livre preenchimento...
 */
#include <math.h>
#include <stdlib.h>
#include <stdio.h>

int main(void){

        long double A, B, C, diagAB, p, areaABC, circulo, pi;
        pi = acosl (-1.0);
        
        printf("Digite o numero A: ");
        scanf("%Lf", &A);

        printf("Digite o numero B: ");
        scanf("%Lf", &B);

        printf("Digite o numero C: ");
        scanf("%Lf", &C);

        diagAB = hypotl(A, B);

        p = (A + B + C)/2;
        areaABC = sqrtl(p*(p-A)*(p-B)*(p-C));
        circulo = powl(C, 2) * pi;

        printf("Diagonal do retangulo de lados A e B = %.2Lf\n", diagAB);
        printf("Area do triangulo de lados A, B e C = %.2Lf\n", areaABC);
        printf("Area do circulo de raio C = %.2Lf\n", circulo);
        printf("Fim de programa\n");

        return 0;

}
