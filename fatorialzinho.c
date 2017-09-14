#include <stdio.h>
#include <math.h>

long long int fatorial(long long int x){
  long long int fat;
  if (x >= 1) {
    fat = x;
  } else {
    return 1;
  }
  while (x > 1) {
    fat = fat * (x-1);
    --x;
  }
  return fat;
}

int main(int argc, char const *argv[]) {
  long long int x;
  printf("Encontrar fatorial de: ");
  scanf("%lld", &x);
  printf("Fatorial de %lld é %lld\n", x, fatorial(x));
  return 0;
}
