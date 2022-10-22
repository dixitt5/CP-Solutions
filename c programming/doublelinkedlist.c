#include<stdio.h>
#include<conio.h>
void insertionbeg();
void insertionend();
void insertionmid();
void deletionbeg();
void deletionend();
void deletionmid();
void search();
void display();
struct node{
int data;
struct node*prev;
struct node*next;
};
struct node*head=NULL;
int main()
{
int ch;
do{

printf("enter 1 for insertion at beg \n 2 for insertion at end \n 3 for insertion at mid \n 4 for deletion at beg \n 5 for deletion at end \n 6 for deletion at mid \n 7 for search \n 8 for display");
scanf("%d",&ch);
switch(ch)
{
case 1:insertionbeg();
      break;
case 2:insertionend();
      break;
case 3:insertionmid();
      break;
case 4:deletionbeg();
      break;
case 5:deletionend();
      break;
case 6:deletionmid();
      break;
case 7:search();
      break;
case 8:display();
      break;
default:printf("enter choice properly");
       break;
}
}while(ch!=9);
}
void insertionbeg()
{
int val;
printf("enter value");
scanf("%d",&val);
struct node*newnode=malloc(sizeof(struct node*));
newnode->data=val;
newnode->prev=NULL;
newnode->next=NULL;
if(head==NULL)
{
head=newnode;
}
else
{
newnode->next=head;
head->prev=newnode;
head=newnode;
}
}
void insertionend()
{
int val;
printf("enter value");
scanf("%d",&val);
struct node*newnode=malloc(sizeof(struct node*));
newnode->data=val;
newnode->prev=NULL;
newnode->next=NULL;
if(head==NULL)
{
head=newnode;
}
else
{
struct node*temp=head;
while(temp->next!=NULL)
{
temp=temp->next;
}
newnode->prev=temp;
temp->next=newnode;

}

}
void insertionmid()
{
struct node*newnode2,*temp;
int val,i,pos;
printf("enter position\n");
scanf("%d",&pos);
printf("enter value");
scanf("%d",&val);
struct node*newnode=malloc(sizeof(struct node*));
newnode->data=val;
newnode->prev=NULL;
newnode->next=NULL;
if(head==NULL)
{
head=newnode;

}
else
{
temp=head;
for(i=0;i<pos-1;i++)
{
temp=temp->next;
if(temp==NULL)
break;

}
if(temp!=NULL)
{
newnode->next=temp->next;
newnode->prev=temp;
temp->next->prev=newnode;
temp->next=newnode;

}
}
}
void deletionbeg()
{
struct node*ptr;
if(head==NULL)
{
printf("we cannot delete");
}
else
{
ptr=head;
head=ptr->next;

free(ptr);
}
}
void deletionend()
{
struct node*ptr;
if(head==NULL)
{
printf("list  is empty");
}
else if(head->next==NULL)
{
head=NULL;
free(head);
printf("only node deleted");
}
else
{
ptr=head;
if(ptr->next!=NULL)
{
ptr=ptr->next;
}
ptr->prev->next=NULL;
free(ptr);
}
}
void deletionmid()
{
if(head==NULL)
{
printf("we cannot delete");
}
else
{
int i,p;
struct node*t=head;
printf("enter position");
scanf("%d",&p);
for(i=0;i<p;i++)
{
t=t->next;
if(t->next==NULL)
break;
}
t->next->prev=t->prev;
t->prev->next=t->next;
printf("deleted element %d",t->data);
free(t);
}
}
void search()
{
struct node*ptr;
int item,i=0,flag;
ptr=head;
if(ptr==NULL)
{
printf("empty list");
}
else
{
printf("enter item");
scanf("%d",&item);
while(ptr!=NULL)
{
if(ptr->data==item)
{
printf("item found at %d",i+1);
flag=0;
}
else
{
flag=1;
}
i++;
ptr=ptr->next;
}
if(flag==1)
{
printf("not found");
}
}
}
void display()
{
struct node*newnode,*temp;
temp=head;
while(temp!=NULL)
{
printf("%d  ",temp->data);
temp=temp->next;
}
printf("\n");
}
