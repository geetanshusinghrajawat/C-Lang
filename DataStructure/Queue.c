#include <stdio.h>
#include<stdlib.h>
void insert (int queue[100], int max, int front, int rear, int item)   
{  
    if (rear + 1 == max)  
    {  
        printf("overflow");  
    }  
    else  
    {  
        if(front == -1 && rear == -1)  
        {  
            front = 0;  
            rear = 0;  
        }  
        else  
        {  
            rear = rear + 1;   
        }  
        queue[rear]=item;  
    }  
}
int delete (int queue[100], int max, int front, int rear)  
{  
    int y;   
    if (front == -1 || front > rear)   
   
    {  
        printf("underflow");  
    }  
    else   
    {  
        y = queue[front];  
        if(front == rear)  
        {  
            front = rear = -1;    
        } 
        else   
            front = front + 1; 
        return y;  
    }  
}
void main()
{
    int choice;
    while (1)
    {
        printf("1.Insert element to queue \n");
        printf("2.Delete element from queue \n");
        printf("3.Quit \n");
        printf("Enter your choice : ");
        scanf("%d", &choice);
        switch (choice)
        {
            case 1:
            insert();
            break;
            case 2:
            delete();
            break;
            case 3:
            exit(1);
            default:
            printf("Wrong choice \n");
        } 
    } 
}