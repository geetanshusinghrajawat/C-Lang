#include <stdio.h>

int main()
{
    int n,sum=0,i;
    printf("enter the number:");
    scanf("%d",&n);
    i=n;
    printf("first %d natural numbers are\n", n);
    while(i>=1)
    {
        printf("%d\t",i);
        sum=sum+i;
        i--;
    }
    printf("\nsum of first %d natural numbers is %d\n",n,sum);
    return 0;
}