#include <stdio.h>
void input_1d(int arr[100], int n)
{
    int i;
    for(i=0;i<n;i++)
    {
        printf("Enter Elememt- ");
        scanf("%d",&arr[i]);
    }
}
void bubble_Sort(int arr[100],int n)
{
    int i,j,temp;
    for(i=0;i<=(n-2);i++)
    {
        for(j=0;j<=(n-2)-i;j++)
        {
            if(arr[j]>arr[j+1])
            {
                temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
}
void traverse_1d(int arr[100], int n)
{
    int i;
    printf("\n");
    for(i=0;i<n;i++)
    {
        printf("%d\t",arr[i]);
    }

}
void main()
{
    int a[100],n;
    printf("Enter size- ");
    scanf("%d",&n);
    input_1d(a, n);
    printf("Before Sort\n");
    traverse_1d(a,n);
    bubble_Sort(a,n);
    printf("\nAfter Sort\n");
    traverse_1d(a,n);

}