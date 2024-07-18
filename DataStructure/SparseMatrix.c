#include<stdio.h>
void input_2d(int a[10][10], int n, int m)
{
    int i,j;
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            printf("Enter Element- ");
            scanf("%d",&a[i][j]);
        }
    }
}
void traverse_2d(int a[10][10], int n, int m)
{
    int i,j;
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            printf("%d\t",a[i][j]);
        }
        printf("\n");
    }
}
void Sparse(int a[10][10],int n, int m)
{
    int check1,check2,i,j,k=1,c,b;
    int sp1[10][10];
    check1=(m*n)/2;
    check2=0;
    for (i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            if(a[i][j]==0)
            {
                check2=check2+1;
            }
        }
    }
    if(check2>check1)
    {
        printf("Its a sparse Matrix");

        for(i=0;i<n;i++)
        {
            for(j=0;j<m;j++)
            {
                if(a[i][j]!=0)
                {
                    sp1[k][0]=i;
                    sp1[k][1]=j;
                    sp1[k][2]=a[i][j];
                    k++;
                }
            }
        }
        sp1[0][0]=i;
        sp1[0][1]=j;
        sp1[0][2]=k-1;
        printf("\nThe Triplet Representation of Matrix is:-\n");
        for(c=0;c<k;c++)
        {
            for(b=0;b<3;b++)
            {   
                printf("%d\t",sp1[c][b]);
            }
            printf("\n");
        }
    }
    else
    {
        printf("Its not a Sparse Matrix");
    }
}
void main()
{
    int arr[10][10],n,m;
    printf("Enter Row Size of the Array");
    scanf("%d",&n);
    printf("Enter Coloumn Size of the Array");
    scanf("%d",&m);
    input_2d(arr,n,m);
    traverse_2d(arr,n,m);
    Sparse(arr,n,m);
}
