#include<stdio.h>
#define NULL 0
struct node
{
    int data;
    struct node *link;
}*start,*node1,*temp;
main()
{
    create();
    search();
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
void search()
{
    int val,c=0;
printf("\n enter value to search=");
scanf("%d",&val);
struct node *lb=start;
struct node *ub=NULL;
while(ub==NULL || ub!=lb)
{
    struct node *ptr1=lb;
    struct node *ptr2=lb->link;
    while(ptr2!=ub)
    {
        ptr2=ptr2->link;
        ptr1=ptr1->link;
        if(ptr2!=ub)
        {
            ptr2=ptr2->link;
        }}
    struct node *mid=ptr1;
    if(mid->data==val)
    {
        c=1;
        temp=start;
        int pos=1;
        while(temp->data!=val)
        {
            pos++;
            temp=temp->link;
        }
        printf("%d is found at position %d",val,pos);
        break;

    }
    if(mid->data<val)
    {
        lb=mid->link;
    }
    if(mid->data>val)
    {
        ub=mid;
    }}
if(c==0)
{
    printf("\n data not found");
}}

