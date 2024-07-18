#include <stdio.h>
void input_1d(int a[100], int *n)
{
    int i;
    for(i=0;i<(*n);i++)
    {
        printf("Enter Elememt- ");
        scanf("%d",&a[i]);
    }
}
void traverse_1d(int a[100], int *n)
{
    int i;
    for(i=0;i<(*n);i++)
    {
        printf("%d\t",a[i]);
    }
}
void insert(int a[100],int *n, int pos,int element)
{
    int i;
    if (pos>=(*n))
    {
        printf("wrong input");
        return;
    }
    else
    {
        for(i=(*n);i>=pos;i--)
        {
            a[i]=a[i-1];
        }
        a[pos-1]=element;
        (*n)++;
    }
}
void main()
{
    int arr[100],n, pos, el;
    printf("Enter size of the array- ");
    scanf("%d",&n);
    input_1d(arr,&n);
    printf("Enter the element you want to add- ");
    scanf("%d",&el);
    printf("\nEnter the position at you want to add the element- ");
    scanf("%d",&pos);
    printf("\nBefore adding the element\n");
    traverse_1d(arr,&n);
    insert(arr,&n,pos,el);
    printf("\nAfter Adding the Element\n");
    traverse_1d(arr,&n);
}