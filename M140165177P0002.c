/*
 * Linhas de livre preenchimento...
 *
 * Matr.: 14/0165177
 * Trab.: 0002
 *
 * Linhas de livre preenchimento...
 */
#include <math.h>
#include <stdio.h>

int main(void){
        long double v1x, v1y, v2x, v2y, v3x, v3y, v4x, v4y;

        printf("Vertice 1; digite a coordenada x: ");
        scanf("%Lf", &v1x);
        printf("Vertice 1; digite a coordenada y: ");
        scanf("%Lf", &v1y);

        printf("Vertice 2; digite a coordenada x: ");
        scanf("%Lf", &v2x);
        printf("Vertice 2; digite a coordenada y: ");
        scanf("%Lf", &v2y);

        printf("Vertice 3; digite a coordenada x: ");
        scanf("%Lf", &v3x);
        printf("Vertice 3; digite a coordenada y: ");
        scanf("%Lf", &v3y);

        if ((v1x == v2x && v2x == v3x) || (v1y == v2y && v2y == v3y))
        {
                printf("Nao forma paralelogramo\n");
                return 0;
        }

        if (((v1x == v2x) && (v1y == v2y)) || ((v1x == v3x) && (v1y == v3y)) || ((v2x == v3x) && (v2y == v3y)))
        {
                printf("Nao forma paralelogramo\n");
                return 0;
        }

        if (((v2y - v1y)/(v2x - v1x)) == ((v3y - v1y)/(v3x - v1x)))
        {
                printf("Nao forma paralelogramo\n");
                return 0;
        }

        v4x = v3x - v2x + v1x;
        v4y = v3y - v2y + v1y;

        printf("Quarto vertice: (%.2Lf, %.2Lf)\n", v4x, v4y);

        return 0;
}
