#include<stdio.h>
void main()
{
    int a[50],b[50],c[100],s1,s2,i,j,k,temp;
    printf("Enter the size for array 1:\n");
    scanf("%d",&s1);
    for(i=0;i<s1;i++)
    {
        printf("Enter Element:");
        scanf("%d",&a[i]);
    }
    printf("\nEnter the size for array 2:");
    scanf("%d",&s2);
    for(i=0;i<s2;i++)
    {
        printf("Enter Element:");
        scanf("%d",&b[i]);
    }
    printf("Sorting both the arrays\n");
    for(i=0;i<s1-1;i++)
    {
        for(j=i+1;j<s1;j++)
        {
            if(a[i]>a[j])
            {
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }
    for (i=0;i<s1;i++)
    {
        printf("%d\t",a[i]);
    }
    for(i=0;i<s2-1;i++)
    {
        for(j=i+1;j<s2;j++)
        {
            if(b[i]>b[j])
            {
                temp=b[i];
                b[i]=b[j];
                b[j]=temp;
            }
        }
    }
    printf("\n\n");
    for (i=0;i<s2;i++)
    {
        printf("%d\t",b[i]);
    }
    for(i=j=k=0;i<=s1+s2;)
    if(a[j]<=b[k])
    {
        c[i++]=a[j++];
    }
    else
    {
        c[i++]=b[k++];
    }
    if(j==s1||k==s2)
    {
        return;
    }
    for(;j<=s1-1;)
    {
        c[i++]=a[j++];
    }
    for(;k<=s2-1;)
    {
        c[i++]=b[k++];
    }
    printf("\n\n After Merging\n");
    for (i=0;i<s1;i++)
    {
        printf("%d\t",c[i]);
    }
}