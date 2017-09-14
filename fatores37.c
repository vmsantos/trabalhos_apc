#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main(){
  int num;
  scanf("%d", &num);
  if ((fmod(num, 21) == 0) || (num == 7) || (num == 3)) {
    printf("fatores sim\n");
  }
    else {
      printf("fatores nao\n");
    }
      return 0;
  }
