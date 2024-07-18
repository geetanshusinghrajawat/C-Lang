#include <stdio.h>
int fact(int);

int main()
{
    int n,i;
    printf("Enter the number");
    scanf("%d",&n);
    i=fact(n);
    printf("factorial is: %d \n", i);
    
    
}

int fact(int num)
{
    if(num<=0)
     return (1);
     
     else
     return(num*fact(num-1));
}
