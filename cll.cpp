#include <stdio.h>
#include <malloc.h>
#include<process.h>
typedef struct link_tag
{
int data;
struct link_tag *link;
}node;
/********** Function Declaration begins **********/
node *push(node *);
node *pop(node *);
void display(node *);
/********** Function Declaration ends **********/
int main()
{
node *start=NULL;
int ch;
printf("\n\t\t Program of stack using linked list");
do
{
printf("\n\t\tMenu");
printf("\n\t\t1.Push");
printf("\n\t\t2.Pop");
printf("\n\t\t3.Display");
printf("\n\t\t4.Exit");
printf("\n\t\tEnter choice : ");
scanf("%d",&ch);
switch(ch)
{
case 1:
start = push(start);
break;
case 2:
start = pop(start);
break;
case 3:
printf("\n\t**** Stack *****\n");
display(start);
break;
case 4:
exit(0);
default:
printf("\nwrong choice:");
}
}
while (ch!=4);
printf("\n");
}
/********** Pushing an element in stack **********/
/********** Function Definition begins **********/
node *push(node *temp)
{
node *new_node;
int item;
printf("Enter an data to be pushed : ");
scanf("%d",&item);
new_node = ( node *)malloc(sizeof( node));
new_node->data = item;
new_node->link = temp;
temp = new_node;
return(temp);
}
node *pop(node *p)
{
node *temp;
if(p == NULL)
printf("\n***** Empty *****\n");
else
{
printf("Popped data = %d\n",p->data);
temp = p->link;
free(p);
p = temp;
if (p == NULL)
printf("\n***** Empty *****\n");
}
return(p);
}
void display(node *seek)
{
printf("\nTop");
while (seek != NULL)
{
printf("-> %d",seek->data);
seek = seek->link;
}
printf("->NULL\n");
return;
}

