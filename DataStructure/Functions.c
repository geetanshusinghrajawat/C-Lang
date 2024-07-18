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
        printf("%d\t",a[i]);
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
    int i,j,k,sum=0;
    if(n!=q)
    printf("The multiplication isn't possible.\n");
    else
    {
        for (i=0;i<n;i++)
        {
            for (j=0;j<q;j++)
            {
                for (k=0;k<p;k++)
                {
                    sum=sum+a[i][k]*b[k][j];
                }
    
                c[i][j]= sum;
                sum = 0;
            }
        }
    }    
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
    char ch;
    do
    {

        printf("\t\tMENU\n \t 1. Linear Search\n \t 2. reverse of 1-D array \n \t 3. Matrix Addition\n \t 4. Matrix Multiplication\n \t 5. Transpose of a matrix \n\t 6. Trace of a matrix \n\t 7. Norm of a matrix \n\t 8. Exit\n\n");
        printf("Enter your choice(1-8):\n");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
    printf("Enter The Size of Array");
            scanf("%d",&n);
                input_1d(arr,n);
            printf("Enter The Element You want to find.");
            scanf("%d",&element);
                linear_search(arr,n,element);

        break;
        case 2:
            printf("Enter The Size of Array- ");
            scanf("%d",&n);
                input_1d(arr,n);
                reverse_1d(arr,n);

        break;
        case 3:
        printf("Enter the order of Ist matrix(m X n)(max 10)\n");
            scanf("%d%d", &m, &n);
            printf("Enter the order of 2nd matrix(p X q) (max 10)\n");
            scanf("%d%d", &p, &q);
            if (m == p && n == q)
            {
                printf("Matrix addition is possible . \n");

                printf("Enter the elements in Ist Matrix\n");
                input_2d(a, m, n); // Do remember that ‘a’ is holding base address of array
                printf("Enter the elements in 2nd Matrix\n");
                input_2d(b, p, q); // Do remember that ‘b’ is holding base address of array

                printf("Ist Matrix\n");
                traverse_2d(a, m, n); // Do remember that ‘a’ is holding base address of array
                printf("2nd Matrix\n");
                traverse_2d(b, p, q); // Do remember that ‘a’ is holding base address of array

                printf("Addition of Ist matrix and 2nd Matrix \n");
                addition(a, b, c, m, n);
                traverse_2d(c,m,n);
            }
            else
            {
                printf("Matrix addition is not possible . \n");
            }
            break;
        case 4:
        printf("Enter The Row size of Array- ");
            scanf("%d",&n);
            printf("Enter The Column size of Array- ");
            scanf("%d",&m);printf("Enter The Row size of Array- ");
            scanf("%d",&p);
            printf("Enter The Column size of Array- ");
            scanf("%d",&q);
                input_2d(a,n,m);
                traverse_2d(a,n,m);
                input_2d(b,p,q);
                traverse_2d(b,p,q);
                multiplication(a,b,c,n,m,p,q);
                traverse_2d(c,n,q);


            break;
        case 5:
            printf("Enter The Row size of Array- ");
            scanf("%d",&n);
            printf("Enter The Column size of Array- ");
            scanf("%d",&m);
                input_2d(a,n,m);
                printf("Array is \n");
                traverse_2d(a,n,m);
                transpose(a,b,n,m);
                printf("with the help of traverse\n");
                traverse_2d(b,m,n);
            break;
        case 6:
        printf("Enter The Row size of Array");
            scanf("%d",&n);
            printf("Enter The Column size of Array");
            scanf("%d",&m);
                input_2d(a,n,m);
                trace(a,n,m);
            break;
        case 7:
        printf("Enter The Row size of Array");
            scanf("%d",&n);
            printf("Enter The Column size of Array");
            scanf("%d",&m);
                input_2d(a,n,m);
                norm(a,n,m);
            break;
        case 8:
            exit;
        default:
            printf("Entered choice is invalid ! Enter correct choice\n");
        }
        printf("\nDo you want to continue(Y/N) \n");
        fflush(stdin);
        scanf("%c", &ch);
    }while (ch == 'Y' || ch == 'y');
}