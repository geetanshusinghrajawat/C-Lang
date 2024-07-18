#include<stdio.h>
#include<stdlib.h>

void search()
{
    int a[100], i, n, s, flag = 0;

    printf("\n\nEnter size of array : ");
    scanf("%d", &n);

    printf("\n\nEnter Element :-\n\n");
    for (i=0;i<n;i++)
    {
        printf("Enter here : ");
        scanf("%d", &a[i]);
    }

    printf("\nEnter Number for Search : ");
    scanf("%d", &s);

    for (i=0;i<n;i++)
    {
        if (s == a[i])
        {
            flag = 1;
        }
    }

    if (flag==1)
    {
        printf("\nElement Found!");
    }
    else
        printf("\nElement NOT Found!");
}

void rev()
{
    int a[100], i, n, t=0, temp[100];

    printf("\n\nEnter size of array : ");
    scanf("%d", &n);

    printf("\nEnter Element :-\n");
    for (i=0;i<n;i++)
    {
        scanf("%d", &a[i]);
    }

    for (i=n-1;i>=0;i--)
    {
        temp[t] = a[i];
        t++;       
    }

    printf("\n\n");
    for (i=0;i<n;i++)
    {
        printf("%d \t", temp[i]);
    }
}

void add()
{
    int row, col, i, j;
    int a1[100][100], a2[100][100], a3[100][100];

    printf("\n\nEnter Rows of Array : ");
    scanf("%d", &row);
    printf("Enter Coloumn of Array : ");
    scanf("%d", &col);

    printf("Enter Element of First Array.\n\n");
    for (i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            printf("Enter Here : ");
            scanf("%d", &a1[i][j]);
        }
    }

    printf("Enter Element of Second Array.\n\n");
    for (i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            printf("Enter Here : ");
            scanf("%d", &a2[i][j]);
        }
    }
    
    for (i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            a3[i][j] = a1[i][j] + a2[i][j];
        }
    }

    printf("\nAddition of Array.\n\n");
    for (i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            printf("%d\t", a3[i][j]);
        }
        printf("\n\n");
    }
}

void mult()
{
    int row, col, row_1, col_1;
    int a1[100][100], a2[100][100], a3[100][100], i, j, k, sum=0, temp=0;
    printf("\n\nEnter Rows of First Array : ");
    scanf("%d", &row);
    printf("Enter Coloumn of First Array : ");
    scanf("%d", &col);

    printf("\n\nEnter Rows of Seocnd Array : ");
    scanf("%d", &row_1);
    printf("Enter Coloumn of Seocnd Array : ");
    scanf("%d", &col_1);

    if (row != col_1)
        printf("The multiplication isn't possible.\n");
    else
    {
        printf("\n\nEnter Element of First Array.\n\n");
        for (i=0;i<row;i++)
        {
            for(j=0;j<col;j++)
            {
                printf("Enter Here : ");
                scanf("%d", &a1[i][j]);
            }
        }

        printf("\n\nEnter Element of Second Array.\n\n");
        for (i=0;i<row_1;i++)
        {
            for(j=0;j<col_1;j++)
            {
                printf("Enter Here : ");
                scanf("%d", &a2[i][j]);
            }
        }
        
        for (i=0;i<row;i++)
        {
            for (j=0;j<col_1;j++)
            {
                for (k=0;k<row_1;k++)
                {
                    sum=sum+a1[i][k]*a2[k][j];
                }
    
                a3[i][j]= sum;
                sum = 0;
            }
        }
        printf("Multiplcation of the matrices:\n");
    
        for (i=0;i<row;i++)
        {
            for (j=0;j<col_1;j++)
            {
                printf("%d\t", a3[i][j]);
            }
            printf("\n\n");
        }
    }
}

void trans()
{
    int row, col, i, j;
    int a1[100][100], a2[100][100];
    printf("\n\nEnter Rows of Array : ");
    scanf("%d", &row);
    printf("Enter Coloumn of Array : ");
    scanf("%d", &col);

    printf("Enter Element of Array.\n\n");
    for (i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            printf("Enter Here : ");
            scanf("%d", &a1[i][j]);
        }
    }
    

    printf("\nEntered Element of Array.\n\n");
    for (i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            printf("%d\t", a1[i][j]);
        }
        printf("\n\n");
    }

    for (i=0;i<col;i++)
    {
        for(j=0;j<row;j++)
        {
            a2[i][j] = a1[j][i];
        }
    }
    
    printf("\nTranspose of Array.\n\n");
    for (i=0;i<col;i++)
    {
        for(j=0;j<row;j++)
        {
            printf("%d\t", a2[i][j]);
        }
        printf("\n\n");
    }
}

void teavers()
{
    int a[100], i, n;

    printf("\n\nEnter size of array : ");
    scanf("%d", &n);

    printf("\nEnter Element :-\n");
    for (i=0;i<n;i++)
    {
        scanf("%d", &a[i]);
    }

    printf("\n\n");
    printf("\nEntered Element are :-\n");
    for (i=0;i<n;i++)
    {
        printf("%d \t", a[i]);
    }
}

void main()
{
    char c=10;


    while (c!=0)
    {
        printf("\n\n01) Search.\n02) Reverse Element.\n03) Addition of Array.\n04) Multiplication of Array.\n05) Transpose of Array.\n06)Traverse.\n00) Exit.\n");
        printf("\nSelect Chouice : ");
        scanf("%c", &c);

        switch (c)
        {
        case '0':
            exit(0);
            break;
        case '1':
            search();
            break;
        case '2':
            rev();
            break;
        case '3':
            add();
            break;
        case '4':
            mult();
            break;
            trans();
        case '5':
            break;
        case '6':
            teavers();
            break;
        
        default:
            printf("Wrong Choice.");
            break;
        }
    }
}