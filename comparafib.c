#include <stdio.h>

int main() {
  int n, forma = 0;
  do {
    scanf("%d", &n);
  } while(n <= 0);
  int mat[n];
  int fib[n];
  fib[0] = 1;
  fib[1] = 1;
  for (size_t i = 2; i < n; i++) {
    fib[i] = fib[i-1] + fib[i-2];
  }
  for (size_t i = 0; i < n; i++) {
    scanf("%d", &mat[i]);
  }
  for (size_t i = 0; i < n; i++) {
    if(mat[i] == fib[i]){
      forma = 1;
    } else{
      forma = 0;
      break;
    }
  }
  if (forma == 1) {
    printf("forma fib\n");
  } else{
    printf("nao forma fib\n");
  }
  return 0;
}
