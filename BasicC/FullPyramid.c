#include<stdio.h>

void main()
{
    int num, i,j;

    printf("\n\nEnter Number : ");
    scanf("%d", &num);
    printf("\n");

    for(i=1;i<=num;i++)
    {
        for(j=num;j>i;j--)
        {
          printf(" ");
        }
        
        for(j=1;j<=i;j++)
        {
          printf("%d ",j);
        }
        printf("\n");
    }

    printf("\n\n");
}
