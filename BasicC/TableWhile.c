//WAP:to accept the number from the user and print table of the given number.
#include <stdio.h>
int main()
{
    int a,b=1;
    printf("Which table you want to print: ");
    scanf("%d",&a);
    
    do{
        printf("The table of the given number is:%d\n", a*b);
        b++;
    }while(b<=10);
    
    return 0;
}
