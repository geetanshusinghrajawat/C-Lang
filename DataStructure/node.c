#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *next;
};


/*void append(struct node **q, int num)
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
}*/

void display(struct node *q)
{
    struct node *temp = q;
    printf("\n\n");
    while(temp != NULL)
    {
        printf("Element is : %d\n", temp->data);
        temp=temp->next; 
    }
}

void main()
{
    struct node * head ;
    struct node * second ;
    struct node * third ;
    struct node * fourth ;

    head = (struct node *) malloc (sizeof (struct node));
    second = (struct node *) malloc (sizeof (struct node));
    third = (struct node *) malloc (sizeof (struct node));
    fourth = (struct node *) malloc (sizeof (struct node));

    head->data = 85;
    head->next = second;

    second->data = 90;
    second->next = third;
    
    third->data = 95;
    third->next = fourth;
    
    fourth->data = 100;
    fourth->next = NULL;

    struct node *p;
    int num;
    p = NULL;

    display(head);
}