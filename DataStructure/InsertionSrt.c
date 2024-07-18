#include <stdio.h>
void main()
{
    int a[50],n,i,j,temp,k;
    printf ( "Enter size of the array " ) ;
    scanf ( "%d", &n) ;
    for ( i = 0 ; i < n; i++ )
    {
        printf ( "Enter element:" ) ;
        scanf ( "%d",&a[i]);
    }
    printf("\n\nArray before sorting:\n") ;
    for(i=0;i<n;i++)
    {
        printf("%d\t",a[i]);
    }
    printf ( "\nInsertion sort." ) ;
    for(i=1;i<n;i++)
    {
        for(j=0;j<i;j++)
        {
            if(a[j]>a[i])
            {
                temp=a[j];
                a[j]=a[i];
                for(k=i;k>j;k--)
                {
                    a[k]=a[k-1];
                }
                a[k+1]=temp;
            }
        }
    }
    printf("\nArray after sorting:\n") ;
    for(i=0;i<n;i++)
    {
        printf("%d\t",a[i]);
    }    
}