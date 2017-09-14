#include <stdio.h>
#include <math.h>
#include <stdlib.h>

long long unsigned int n, primeiro = 0, segundo = 1, proximo, i, m = 0;
int main(void){
								printf("Escolha a quantidade de termos da sequência de Fibonacci.\nO 0-ésimo termo sempre será mostrado na sequência.\n");
								scanf("%llu",&n); //pega quantidade de termos

								n = abs(n);

								printf("\x1B[1;1H\x1B[2J"); //limpa a tela
inicio:

								if (n == 0)
								{
																printf("0-ésimo termo = 0\n");
								}

								if (n == 1)
								{
																printf("1-ésimo termo = 1\n");
																n = n - 1;
																goto inicio;
								}
								if (n == 2)
								{
																printf("2-ésimo termo = 1\n");
																n = n - 1;
																goto inicio;
								}

								if (n > 2)
								{
																do
																{

																								for (int i = 2; i <= n; ++i) //loop
																								{
																																proximo = primeiro + segundo;
																																primeiro = segundo;
																																segundo = proximo;
																								}
																								printf("%llu-ésimo termo = %llu\n", n, proximo); //imprime N-ésimo termo.
																								n = n - 1;
																								primeiro = 0;
																								segundo = 1;
																} while (m != n);
																goto inicio;

								}

								return 0;

}
