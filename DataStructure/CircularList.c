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
        *q = temp;
        temp->next = *q;
    }

    else
    {
        temp = *q;
        while(temp->next != *q)
        {
            temp = temp->next;
        }
        r = (struct node *)malloc(sizeof(struct node));
        r->data = num;
        temp->next = r;
        r->next = *q;
    }
}

void display(struct node *q)
{
    struct node *temp = q, *r=NULL;
    printf("\n\nLinked List --> ");
    while(temp != r)
    {
        printf("%d, ", temp->data);
        temp=temp->next; 
        r=q;
    }
    printf("\b");
}

void count(struct node *q)
{
    struct node *temp = q, *r=NULL;
    int count = 0;

    while (temp != r)
    {
        temp = temp -> next;
        count++;
        r=q;
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

    display(p);
    count(p);
}