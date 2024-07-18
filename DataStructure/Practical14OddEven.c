#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *next;
};


void append(struct node **q, int num)
{
    struct node *temp, *r;
    if (*q == NULL)
    {
        temp=(struct node*)malloc(sizeof(struct node));
        temp->data = num;
        temp->next = NULL;
        *q = temp;
    }

    else
    {
        temp = *q;
        while(temp->next != NULL)
        {
            temp = temp->next;
        }
        r = (struct node *)malloc(sizeof(struct node));
        r->data = num;
        r->next = NULL;
        temp->next = r;
    }
}

void displayEven(struct node *q)
{
    struct node *temp = q;
    printf("\n\nEVEN List --> ");
    while(temp != NULL)
    {
        if(temp->data %2 == 0)
        {
            printf("%d, ", temp->data);
        }
        temp=temp->next; 
    }
}
void displayodd(struct node *q)
{
    struct node *temp = q;
    printf("\n\nODD List --> ");
    while(temp != NULL)
    {
        if(temp->data %2 == 1)
        {
            printf("%d, ", temp->data);
        }
        temp=temp->next; 
    }
}

void count(struct node *q)
{
    struct node *temp = q;
    int count = 0;

    while (temp != NULL)
    {
        temp = temp -> next;
        count++;
    }
    printf("\n\nTotal Nodes are : %d", count);
    
}

void main()
{
    int num, size;

    struct node *p;

    p = NULL;

    printf("\n\nEnter the size of List : ");
    scanf("%d", &size);
    printf("\n\n");

    for (int i = 0; i < size; i++)
    {
        printf("Enter Here : ");
        scanf("%d", &num);
        append(&p, num);
    }

    displayodd(p);
    displayEven(p);
    count(p);
}