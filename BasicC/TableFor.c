//WAP:to accept the number from the user and print table of the given number.
#include <stdio.h>
int main()
{
    int n,i;
    printf("which table you want to print?");
    scanf("%d",&n);
    for(i=1;i<=10;i++)
    {
    printf("\n %d*%d=%d",i,n,i*n);
    }
    return 0;
}