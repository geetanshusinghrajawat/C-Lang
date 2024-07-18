#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int fact()
{
    int num, i, fact=1;

    printf("\n\nEnter Number : ");
    scanf("%d", &num);

    for(i=1;i<=num;i++)
    {
        fact = fact*i;
    }
    printf("\n%d", fact);
}

int power()
{
    int num, power;
    long int c;

    printf("Enter Number : ");
    scanf("%d", &num);
    printf("Enter Power : ");
    scanf("%d", &power);
    c=pow(num, power);
    printf("%ld", c);
}

int table()
{
    int num;
    printf("\n\nEnter Number : ");
    scanf("%d", &num);
    printf("\n");

    for(int i=1;i<=10;i++)
    {
        printf("%d * %d = %d\n", num, i, num*i);
    }
}
int fib()
{
    int num, t1=0, t2=1, fib;

    printf("\n\nEnter Number : ");
    scanf("%d", &num);

    printf("\nFibonacci Series --> ");

    for(int i=0;i<num;i++)
    {
        fib = t1 + t2;

        printf("%d, ", t1);
        
        t1 = t2;
        t2 = fib;
    }
}
int prime()
{
    int num, p=0;
    printf("\n\nEnter Number : ");
    scanf("%d", &num);

    for(int i=2;i<(num/2);i++)
    {
        if(num%i==0)
        {
            p=1;
            break;
        }
    }

    if (num==2)
    {
        printf("\n%d is a Prime Number.\n\n", num);
    }
    
    if(p==1)
    {
        printf("\n%d is not a Prime Number.\n\n", num);
    }
    else
        printf("\n%d is a Prime Number.\n\n", num);
}

int rev()
{
    int num;

    printf("Enter Number : ");
    scanf("%d", &num);

    for(int i=num; i>=1;i--)
    {
        printf("%d\n", i);
    }
}

void main()
{
    int c;
    
    printf("1) Factorial.\n2) Power.\n3) Table.\n4) Fibonacci Series.\n5) Check Prime or NOT.\n6) Reverse.\n\n");
    printf("Enter The choice : ");
    scanf("%d", &c);
    switch (c)
    {
    case 1:
        fact();        
        break;
    case 2:
        power();        
        break;
    case 3:
        table();        
        break;
    case 4:
        fib();        
        break;
    case 5:
        prime();        
        break;
    case 6:
        rev();        
        break;
    
    default:
        printf("Wrong Input");
        break;
    }
}