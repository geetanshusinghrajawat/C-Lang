#include<stdio.h>

void input(int a[100], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("Enter Element: ");
        scanf("%d", &a[i]);
        
    }
}

void output(int a[100], int n)
{
    printf("\n\n");
    for(int i=0;i<n;i++)
    {
        printf("%d\t", a[i]);
    }
}

int search(int a[100], int n, int element, int lb, int ub)
{
    int mid, flag;
    while((lb <= ub))
    {
        mid = (lb + ub) / 2;
        if(a[mid]==element)
        {
            printf("The Element is Present in this Array");
            flag = 1;
            return 1;
        }

        else if(a[mid]>element)
        {
            ub=mid-1;
        }

        else
        {
            lb = mid+1;
        }
    }
return flag;
}

void main()
{
    int arr[100], size, element,  lb, ub, mid, flag;

    printf("\n\nEnter size of Matrix : ");
    scanf("%d", &size);

    lb = 0;
    ub = size-1;

    input(arr, size);
    output(arr, size);

    printf("\n\nEnter Element to search : ");
    scanf("%d", &element);

    flag = search(arr, size, element, lb, ub);
    if (flag==0)
    {
        printf("%d Element NOT found.", element);
    } 
    else
        printf("%d Element Found", element);  
}