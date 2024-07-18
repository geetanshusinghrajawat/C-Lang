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
    int a[100], b[100], c[100], n, m;
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
}