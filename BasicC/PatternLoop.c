#include <stdio.h>

int main()
{
int i=1, j, rows ;
printf("Enter the number of rows:");
scanf("%d",&rows);
while(i<=rows)
{
    for(j=1;j<=i;j++)
    {
        printf("* \t");
    }
    printf("\n");
    i++;
}
return 0;
}