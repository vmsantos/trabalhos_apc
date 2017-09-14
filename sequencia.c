#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main(){
int CurrentN, SmallestN = 999999, GreatestN = -999999, n;
  while (scanf("%d", &CurrentN) == 1) {
    n = CurrentN;
    if (n == 0) {
      printf("fim do programa\n");
      return 0;
    }
      if (CurrentN < SmallestN) {
        SmallestN = CurrentN;
        printf("%d é o menor número. \n", SmallestN);
      }
      if (CurrentN > GreatestN){
        GreatestN = CurrentN;
        printf("%d é o maior número. \n", GreatestN);
      }
  }
}
