#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int a, b, c, fact = 1;

int main(void) {

  do {scanf("%d", &b);
} while (b < 0);
  do {scanf("%d", &a);
} while (a < 0);
  for (c = 1; c <= b; c++){
    fact = fact * c;
  }
 if(a == fact){
    printf("%d eh fatorial de %d\n", fact, b);
  }
return 0;
}
