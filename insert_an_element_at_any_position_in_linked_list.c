#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node * next;
};
typedef struct node node;
int main()
{
  node *p,*start=NULL,*temp,*a,*new,*b;
  int n;
  printf("How may numbers you want to store :");
  scanf("%d",&n);
  for(int i=0;i<n;i++)
  {
    p=(node*)malloc(sizeof(node));
    p->next=NULL;
    printf("Enter the data : ");
    scanf("%d",&p->data);
    if(start==NULL)
    {
        start=p;
    }
    else
    {
        temp->next=p;
    }
    temp=p;
    b=p;
  }
  printf("The list of the data is : \n");
  temp=start;
  while(temp!=NULL)
  {
    printf("%d, ",temp->data);
    a=temp->next;
    temp=a;
  }
  p=(node*)malloc(sizeof(node));
  printf("\nEnter the data which you want to insert at last position : ");
  scanf("%d",&p->data);
  p->next=NULL;
  b->next=p;
  printf("After insert the data at last position the list of the data is : \n");
  temp=start;
  while(temp!=NULL)
  {
    printf("%d, ",temp->data);
    a=temp->next;
    temp=a;
  }
}