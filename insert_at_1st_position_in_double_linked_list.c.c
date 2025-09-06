#include<stdio.h>
#include<stdlib.h>
struct node
{
   int data;
   struct node *left;
   struct node *right;
};

int main()
{
    struct node *p,*start=NULL,*temp,*new;
    int c;
    printf("How many numbers you want to enter : ");
    scanf("%d",&c);
    
    
    for(int i=0;i<c;i++)
    {
    p=(struct node*)malloc(sizeof(struct node));
    printf("Enter the data : ");
    scanf("%d", &p->data);
    p->left=NULL;
    p->right=NULL;
    if(start==NULL)
    {
        start=p;
    }
    else
    {
        temp->right=p;
        p->left=temp;
    }
    temp=p;
    }
    printf("\nDoubly Linked List (Forward): ");
    temp=start;
    while(temp!=NULL)
    {
        printf("%d ", temp->data);
        temp=temp->right;
    }
    printf("\nDoubly Linked List (Backward): ");
    temp=start;
    while(temp->right!=NULL)
    {
        temp=temp->right;
    }
    while(temp!=NULL)
    {
        printf("%d ", temp->data);
        temp=temp->left;
    }
    p=(struct node*)malloc(sizeof(struct node));
    printf("Enter the number which you want to incert at 1st position : ");
    scanf("%d",&p->data);
    p->left=NULL;
    p->right=start;
    start->left=p;
    start=p;
   printf("\nAfter insert at 1st position the Doubly Linked List is(Forward): ");
    temp=start;
    while(temp!=NULL)
    {
        printf("%d ", temp->data);
        temp=temp->right;
    }
    printf("\nAfter insert at 1st position the Doubly Linked List is(Backward): ");
    temp=start;
    while(temp->right!=NULL)
    {
        temp=temp->right;
    }
    while(temp!=NULL)
    {
        printf("%d ", temp->data);
        temp=temp->left;
    }
}
