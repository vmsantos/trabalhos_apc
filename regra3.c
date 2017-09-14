#include <stdio.h>
#include <math.h>

int main(void) {
        int a, b, c, x = 0;

        printf("Regra de tres simples. Digite os 3 numeros\n");
        scanf("%d%d%d", &a, &b, &c);
        x = (c*b)/a;
        printf("resultado: %d\n", x);


        return 0;
}
