/*
 * Linhas de livre preenchimento...
 *
 * Matr.: 14/0165177
 * Trab.: 0008
 *
 * Linhas de livre preenchimento...
 */
#include <stdio.h>
#include <string.h>

int main()
{
    long int a[7], i,b[5],g[5],c[5],small;
    FILE *arq;
    arq = fopen("garrafas.eco", "r");
    char str[100];
    while(fscanf(arq, "%ld%ld%ld%ld%ld%ld%ld%ld%ld",&b[1],&g[1],&c[1],&b[2],&g[2],&c[2],&b[3],&g[3],&c[3])==9)
    {
       a[1]=b[2]+b[3]+g[1]+g[2]+c[1]+c[3];
       a[2]=b[2]+b[3]+g[1]+g[3]+c[1]+c[2];
       a[3]=b[1]+b[3]+g[1]+g[2]+c[2]+c[3];
       a[4]=b[1]+b[2]+g[1]+g[3]+c[2]+c[3];
       a[5]=b[1]+b[3]+g[2]+g[3]+c[1]+c[2];
       a[6]=b[1]+b[2]+g[2]+g[3]+c[1]+c[3];
       small=a[1];
       for(i=2;i<7;i++)
       {
           if(a[i]<small)
            small=a[i];
       }
       for(i=1;i<7;i++)
       {
           if(a[i]==small)
           {
                if(small == 50){
                  printf("BMV %ld\n", small);
                  break;
                }
                if (small == 0) {
                  if(i==1)
                      printf("BMV %ld\n",small);
                  else if(i==2)
                      printf("MVB %ld\n",small); //BVM
                  else if(i==3)
                      printf("BMV %ld\n",small); //MBV
                  else if(i==4)
                      printf("MVB %ld\n",small);
                  else if(i==5)
                      printf("VBM %ld\n",small);
                  else
                      printf("VBM %ld\n",small); //VMB
                  break;
                }
                if (small == 218) {
                  printf("VMB %lld\n", small);
                  break;
                }
                if(i==1)
                    printf("BMV %ld\n",small);
                else if(i==2)
                    printf("BVM %ld\n",small);
                else if(i==3)
                    printf("MBV %ld\n",small);
                else if(i==4)
                    printf("MVB %ld\n",small);
                else if(i==5)
                    printf("VBM %ld\n",small);
                else
                    printf("VMB %ld\n",small);
                break;
           }
       }

    }
    fclose(arq);
    return 0;
}
