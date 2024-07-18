#include<stdio.h>
#include<stdlib.h>

void input(int a[100], int n)
{
    int i;
    for(i=0;i<n;i++)
    {
        printf("Enter here : ");
        scanf("%d", &a[i]);
    }
}

void output(int a[100], int n)
{
    int i;
    for(i=0;i<n;i++)
    {
        printf("%d\t", a[i]);
    }
}

void bubble(int a[100], int n)
{
    int i, j, temp;

    for(i=0;i<n-1;i++)
    {
        for(j=i;j<n;j++)
        {
            if (a[i] > a[j])
            {
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }
}

void insertion(int a[100], int n)
{
    int temp, i, j, k;
    for (i = 1; i < n; i++)
    {
        for (j = 0; j < i; j++)
        {
            if (a[j]>a[i])
            {
                temp = a[j];
                a[j] = a[i];

                for (k = i; k > j; k--)
                {
                    a[k] = a[k-1];
                }
                
                a[k+1] = temp;
            }
        }
    }
}

void selecion(int a[100], int n)
{
    int temp;

    for (int i = 0; i < n-1; i++)
    {
        for (int j = i+1; j < n; j++)
        {
            if (a[i]>a[j])
            {
                temp = a[j];
                a[j] = a[i];
                a[i] = temp;
            }
        }
    }
}

void merge(int a[100], int b[100], int c[100], int n_1, int n_2)
{
    int i=0, j=0, k=0;
    while (i<n_1 && j<n_2)
    {
        if (a[i]<b[j])
        {
            c[k++] = a[i++];
        }
        else
        {
            c[k++] = b[j++];
        }
    }
    while (j<n_2)
    {
        c[k++]=b[j++];
    }

    while (i<n_1)
    {
        c[k++]=a[i++];
    }
}

void main()
{
    int a[100], b[100], c[100], n, m, choice;
    char ch;
    do
    {

        printf("\n\t\tMENU\n \t 1. Bubble Sort\n \t 2. Insertion Sort\n \t 3. Selecton Sort\n \t 4. Merge Sort\n \t 5. Exit\n\n");
        printf("Enter your choice(1-5) : ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:     // Bubble sort.
            printf("\n\nEnter the size of array : ");
            scanf("%d", &n);

            printf("Enter Element in Array:\n");
            input(a, n);
            printf("\n\nArray Before Sorted\n");
            output(a, n);

            bubble(a, n);
            printf("\n\nArray After Sorted\n");
            output(a, n);
            break;

        case 2:     // Insertion sort
            printf("\n\nEnter size of array : ");
            scanf("%d", &n);

            printf("Enter Element in Array:\n");
            input(a, n);
            printf("\n\nArray Before Sorted\n");
            output(a, n);
            insertion(a, n);
            printf("\n\nArray After Sorted\n");
            output(a, n);
            break;
            
        case 3:     // Selection sort
            printf("\n\nEnter the size of Array : ");
            scanf("%d", &n);

            printf("Enter Element in Array:\n");
            input(a, n);
            printf("\n\nArray Before Sorted\n");
            output(a, n);
            printf("\n\nArray After `Sorted\n");
            selecion(a, n);
            output(a, n);
            break;

        case 4:     //Merge
            printf("\n\nEnter size of First Array : ");
            scanf("%d", &n);

            printf("\nEnter the Element of First Array:\n");
            input(a, n);

            printf("\n\nEnter size of Second Array : ");
            scanf("%d", &m);
            
            printf("\nEnter the Element of Second Array:\n");
            input(b, m);

            printf("\n\nArray After Merge:\n");
            selecion(a, n);
            selecion(b, m);
            merge(a, b, c, n, m);
            output(c, n+m);
            break;

        case 5:
            exit(0);

        default:
            printf("Entered choice is invalid ! Enter correct choice\n");
        }
        printf("\n\nDo you want to continue(Y/N) : ");
        fflush(stdin);
        scanf("%c", &ch);
    } while (ch == 'Y' || ch == 'y');
}