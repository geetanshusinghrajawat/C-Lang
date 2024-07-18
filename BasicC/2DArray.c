#include<stdio.h>
void main()
{
    int arr[2][3],i,j,sum=0;
    printf("enter the elements");
    for(i=0;i<2;i++)
    {
        for(j=0;j<3;j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }
    for(i=0;i<2;i++)
    {
        for(j=0;j<3;j++)
        {
            sum=sum+arr[0][2];
        }
    }
    printf("sum is %d", sum);
}