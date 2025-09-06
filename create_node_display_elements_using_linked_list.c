#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *next;
};
typedef struct node node;
int main()
{
    node *p,*start=NULL,*temp,*a;
    int n;
    printf("How many numbers you want to store : ");
    scanf("%d", &n);
    for(int i=0;i<n;i++)
    {    
      p=(node*)malloc(sizeof(node));
      printf("Enter the data :");
      scanf("%d",&p->data);
      p->next=NULL;
      if(start==NULL)
      {
        start=p;
      }
      else
      {
         temp->next=p;
      }
      temp=p;
    }
    printf("The entered data are : ");
    temp=start;
    while(temp!=NULL)
    {
      printf("%d ",temp->data);
      a=temp->next;
      temp=a;
    }
}