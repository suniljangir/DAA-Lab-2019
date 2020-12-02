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
    int val;
    printf("\n enter the value to be searched");
    scanf("%d",&val);
    if(start==NULL)
    {
        printf("\n list is empty");
    }
    else
    {
        temp=start;
        int d=1,loc=0;
        while(temp!=NULL)
        {
            if(temp->data==val)
            {
                loc=d;
                break;
            }
            temp=temp->link;
            d++;
        }
        if(loc!=0)
        {
        printf("\n %d is at position %d",val,loc);
        }
        else
        {
            printf("\n it is not in the list");}}}

