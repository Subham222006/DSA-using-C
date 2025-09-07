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
  int n,pos;
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
  printf("\nEnter the position where you want to insert a data : ");
  scanf("%d",&pos);
  printf("\nEnter the data which you want to insert at %d position : ",pos);
  scanf("%d",&p->data);
  if(pos==1)
  {
   p->next=start;
   start=p;
  }
  else
  {
    temp=start;
    for(int i=1;i<pos-1;i++)
    {
      temp=temp->next;
    }
    p->next=temp->next;
    temp->next=p;

  }
  
  printf("After insert the data at %d position the list of the data is : \n",pos);
  temp=start;
  while(temp!=NULL)
  {
    printf("%d, ",temp->data);
    a=temp->next;
    temp=a;
  }
}
