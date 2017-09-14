#include <stdio.h>
#include <math.h>
#include <stdlib.h>

long long unsigned int n, primeiro = 0, segundo = 1, proximo, i;
int main(void){
	printf("Escolha a quantidade de termos para a sequencia de Fibonacci.\n");
	scanf("%llu",&n); //pega quantidade de termos
	printf("\x1B[1;1H\x1B[2J");
	printf("%llu\n%llu\n", primeiro, segundo );
	for (int i = 0; i <= n; ++i) //loop
	{
		proximo = primeiro + segundo;
		primeiro = segundo;
		segundo = proximo;
		printf("%llu\n", proximo);
	}

return 0;

}