//WAP: to swap the nmbers by call by refrence
#include <stdio.h>
void swap(int *, int *);
int main()
{
    int a=10, b=20 ;
    printf("Value before swapping of the variables are: a=%d, b=%d \n\n",a, b);
    swap(&a,&b);
    printf("Values after function call inside main are a=%d, b=%d \n\n",a,b);
}
void swap(int *a, int *b ) //pointer variables
{
    int temp;
    //logic of swapping of numbers
    temp=*a;
    *a=*b;
    *b=temp;
    printf("After swapping values inside the functions are a=%d, b=%d \n\n ",*a,*b );
}