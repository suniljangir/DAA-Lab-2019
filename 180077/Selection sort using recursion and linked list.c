#include<stdio.h>
struct node
{
    int data;
    struct node *link;
}*start,*node1,*temp,*ptr;
main()
{
    create();
    resort(start);
    display();
}
void create()
{
    int n;
    printf("\n enter no. of nodes=");
    scanf("%d",&n);
    start=NULL;
    while(n>=1)
    {
        node1=(struct node*)malloc(sizeof(start));
        node1->link=NULL;
        scanf("%d",&node1->data);
        if(start==NULL)
        {
            start=node1;
        }
        else{
            temp=start;
            while(temp->link!=NULL)
            {
                temp=temp->link;
            }
            temp->link=node1;
        }
        n--;
    }}
void display()
{
     if(start==NULL)
{
printf("\n link list is empty");
}
else
{
temp=start;
printf("\n sorted list=\n");
while(temp!=NULL)
{
printf("%d\t",temp->data);
temp=temp->link;
}}}
void resort(struct node *head)
{
    temp=head;
    for(ptr=temp;ptr!=NULL;ptr=ptr->link)
    {
        if(ptr->data<temp->data)
        {
            int c=ptr->data;
            ptr->data=temp->data;
            temp->data=c;
        }}
    if(temp->link!=NULL)
    {
    resort(head->link);
    }}
