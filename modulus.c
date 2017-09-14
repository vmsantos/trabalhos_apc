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

int n;

int main(void) {
  scanf("%d", &n);
  for (size_t i = 1; i < n; i++) {
    printf("%lu\n", n % i);
  }
  return 0;
}
