#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
// Function Prototypes
void input_1d(int a[100], int n);
void traverse_1d(int a[100], int n);
void input_2d(int a[10][10], int m, int n);
void traverse_2d(int a[10][10], int m, int n);
void linear_search(int a[100], int n, int element);
void reverse_1d(int a[100], int n);
void addition(int a[10][10], int b[10][10], int c[10][10], int m, int n);
void multiplication(int a[10][10], int b[10][10], int c[10][10], int m, int n, int p, int q);
void transpose(int a[10][10], int b[10][10], int m, int n);
void trace(int a[10][10], int m, int n);
void norm(int a[10][10], int m, int n);
// Function Definitions
// Function1: to read elements in 1-D array
void input_1d(int a[100], int n)
{
    int i;
    for(i=0;i<n;i++)
    {
        printf("Enter Elememt- ");
        scanf("%d",&a[i]);
    }
}
// Function2: to traverse 1-D array
void traverse_1d(int a[100], int n)
{
    int i;
    for(i=0;i<n;i++)
    {
        printf("%d/t",a[i]);
    }
}
// Function3: to read elements in 2-D array
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
// Function4: to traverse 2-D array
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
// Function5: to perform linear search
void linear_search(int a[100], int n, int element)
{
    int i;
    for(i=0;i<n;i++)
    {
        if(element==a[i])
        printf("element mil gaya balle balle");
        break;
    }
    printf("Here is your element-  %d",a[i]);
    if(i==n)
    printf("The given element is not in the array");

}
// Function6: to print reverse of 1-D array
void reverse_1d(int a[100], int n)
{
    int i;
    for(i=n-1;i>=0;i--)
    {
        printf("%d",a[i]);
    }
}
// Function7: to perform matix addition
void addition(int a[10][10], int b[10][10], int c[10][10], int n, int m)
{
    int i,j;
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            c[i][j]=a[i][j]+b[i][j];
        }
    }
}
// Function8: to perform matix multiplication
void multiplication(int a[10][10], int b[10][10], int c[10][10], int n, int m, int p, int q)
{
}
// Function9: to find transpose of matrix
void transpose(int a[10][10], int b[10][10], int n, int m)
{
    int i,j;
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            b[i][j]=a[j][i];
        }
    }
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("%d\t",b[i][j]);
        }
        printf("\n");
    }
}
// Function10: to find trace of matrix
void trace(int a[10][10], int n, int m)
{
    int i,j,b=0;
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            if(i==j)
            b=b+ a[i][j];
        }
    }
    printf("The trace of this array is- %d",b);
}
// Function11: to find norm of matrix
void norm(int a[10][10], int n, int m)
{
    int i,j,b=0;
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            b=b+ a[i][j]*a[i][j];
        }
    }
    printf("The norm of this array is- %d",b);
}
void main()
{
    int arr[100], element, a[10][10], b[10][10], c[10][10], m, n, p, q, choice;
    printf("Enter The Row size of Array- ");
            scanf("%d",&n);
            printf("Enter The Column size of Array- ");
            scanf("%d",&m);
                input_2d(a,n,m);
                traverse_2d(a,n,m);
                transpose(a,b,n,m);

}