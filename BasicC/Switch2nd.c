#include<stdio.h>

void main()
{
    int ch, i, j, num, fact, rem, sum=0, temp, r, in;

    printf("\n\nSelect Choice :-\n\n");
    printf("1)12345\n12345\n12345.\n \n2)11111\n22222\n33333.\n\t");
    scanf("%d", &ch);

    switch (ch)
    {
        case 1:
        printf("enter number of times till you want to print: ");
        scanf("%d",&num);
        printf("the output is:\n");
        for (j=1;j<=num;j++)
        {
            printf("\n");
            for(i=1;i<=num;i++)
            {
                printf("%d",i,num);   
            }
        }

    
        break;
    
        case 2:
            printf("enter number of times till you want to print: ");
            scanf("%d",&r);
            printf("the output is:\n");
            for(i=1;i<=r;i++)
                {
                    printf("%d\n",i);
                    for (j=1;j<=r;j++)
                    {
                    printf("%d",j); 
                    }      

                }
        
        

    }

}        