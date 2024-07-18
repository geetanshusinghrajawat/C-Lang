#include<stdio.h>
#include<stdlib.h>

struct node
{
    char name;
    int roll;
    int s1, s2, s3, s4, s5;
    struct node *next;

};


void append(struct node **q, char name, int roll, int s1, int s2, int s3, int s4, int s5)
{
    struct node *temp, *r;
    if (*q == NULL)
    {
        temp=(struct node*)malloc(sizeof(struct node));
        temp->name = name;
        temp->roll = roll;
        temp->s1 = s1;
        temp->s2 = s2;
        temp->s3 = s3;
        temp->s4 = s4;
        temp->s5 = s5;
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
        r->name = name;
        r->roll = roll;
        r->s1 = s1;
        r->s2 = s2;
        r->s3 = s3;
        r->s4 = s4;
        r->s5 = s5;
        r->next=NULL;
        temp->next = r;
    }
}

void display(struct node *q)
{
    struct node *temp = q;
    while(temp != NULL)
    {
        printf("Name : %c\n", temp->name);
        printf("Roll no. : %d\n", temp->roll);
        printf("Maths : %d\n", temp->s1);
        printf("IP : %d\n", temp->s2);
        printf("English : %d\n", temp->s3);
        printf("Physics : %d\n", temp->s4);
        printf("Php%d\n", temp->s5);
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
    int roll, s1, s2, s3, s4, s5, size, i;
    char name[30];

    struct node *p;

    p = NULL;

    printf("\n\nEnter total number of student : ");
    scanf("%d", &size);
    printf("\n\n");

    for ( i = 0; i < size; i++)
    {
        printf("Enter the name of student : ");
        scanf("%s", &name);

        printf("Enter the roll no : ");
        scanf("%d", &roll);

        printf("Enter the marks of Maths : ");
        scanf("%d", &s1);
        printf("Enter the marks of IP : ");
        scanf("%d", &s2);
        printf("Enter the marks of English : ");
        scanf("%d", &s3);
        printf("Enter the marks of Physics : ");
        scanf("%d", &s4);
        printf("Enter the marks of php : ");
        scanf("%d", &s5);
        append(&p, name, roll, s1,  s2 ,  s3,  s4,  s5);
    }

    display(p);
    count(p);
}