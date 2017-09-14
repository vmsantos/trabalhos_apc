/* Taylor series of exponetial function of x using Nth terms precision */
#include <stdio.h>
#include <math.h>

long double factorial(long double);
int main(void)
{
        int i,n,x;
        long double sum=1;

        printf("Enter Value of N (terms) : ");
        scanf("%d",&n);
        printf("Enter value of x : ");
        scanf("%d",&x);
        printf("\n\n");
        for(i=1; i<=n; i++)
        {
                printf("%.0Lf/%d! + ",powl(x, i),i);
                sum+= (powl(x, i))/(factorial(i));
        }
        printf("\n\nSum of Series upto %d terms = %.20Lf \n",n,sum);
        return 0;
}

long double factorial(long double i)
{
        long double c;
        long double result = 1;

        for (c = 1; c <= i; c++)
                result = result * c;

        return result;
}
