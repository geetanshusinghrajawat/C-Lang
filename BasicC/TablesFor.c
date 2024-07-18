#include <stdio.h>
int main()
{
    int j,i,n,prod;
    printf("tables till you want to print:");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=10;j++)
        {
            prod=i*j;
            printf("%d * %d = %d\t",i,j,prod);
        }
        printf("\n");
    }
    return 0;
}