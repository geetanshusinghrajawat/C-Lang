#include<stdio.h>

void main()
{
    int ch, i, j, num, fact, rem, sum=0, temp, r, in;

    printf("\n\nSelect Choice :-\n\n");
    printf("1)Prime Number.\n2)Armstrong Number.\n3)Print reverse Intger.\n\t");
    scanf("%d", &ch);

    switch (ch)
    {
        case 1:

        printf("Enter Number : ");
        scanf("%d", &num);

        for(i=2;i<=num;i++)
        {
            fact=0;

            for(j=1;j<=num;j++)
            {
                if(i%j==0)
                {
                    fact++;
                }
            }

            if(fact==2)
            {
                printf("%d, ", i);
            }
        }
        break;

        case 2:

        printf("Enter Number : ");    
        scanf("%d",&rem);    
        temp=rem;    
        while(rem>0)    
        {    
        r=rem%10;    
        sum=sum+(r*r*r);    
        rem=rem/10;    
        }    
        if(temp==sum)    
        printf("%d is Armstrong Number ", temp);    
        else    
        printf("%d is not Armstrong Number", temp); 
        break;
        
        case 3:

        printf("Enter Number : ");
        scanf("%d", &in);

        for(i=in;i>=1;i--)
        {
            printf("%d\t", i);
        }
        break;

        default:
        printf("\nWrong Input.");
    }
}