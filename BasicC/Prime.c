//WAP: to print prime number till a particular range.
#include <stdio.h>
int main()
{
    int n,i,fact,j,count=0; //n-range of numbers, i-outerloop variable,fact-counting factors, j-inner loop variable
    printf("enter the number till you want to print the prime numbers: ");
    scanf("%d",&n);
    printf("the prime numbers are:\n");
    
    for(i=1;i<=n;i++)//loop for testing the numbers
    {
        fact=0;//putting the value of fact is imp else it will take a garbage value

        for(j=1;j<=n;j++)
        {
            if(i%j==0)
            fact++;//increment
        }
    
        if(fact==2)
        {
            printf("%d \n",i);
            count++;
        }
        
    }
    printf("total prime numbers are %d", count);    
    return 0;
}