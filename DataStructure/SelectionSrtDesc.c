#include <stdio.h>

void main()
{
    int arr[30], n, i, j, temp;

    printf("\nEnter Size For array : ");
    scanf("%d", &n);
    printf("\n");

    for (i=0;i<n;++i)
    {
        printf("Enter Here : ");
        scanf("%d", &arr[i]);
    }
    printf("\n After Selection Sort of the array.\n");
    for(i=0;i<n-1;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(arr[i]<arr[j])
            {
                temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    }
    for (i=0;i<n;i++)
    {
        printf("%d\t",arr[i]);
    }
}

