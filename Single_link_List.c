#include<stdio.h>
#include<stdlib.h>
typedef struct nodetype
{
    int info;
    struct nodetype *next;

} node;
node *memory()
{
    node *temp;
    temp=(node *)malloc(sizeof(node));
    temp->next=0;
    return temp;
}

node *atfirst(node *head)
{
    node *new_node;
    int num;

    printf("Enter data to be inserted at first\n");
    scanf("%d",&num);

    new_node = memory();
    new_node->info = num;
    new_node->next = head;
    head = new_node;

    return head;

}
node *after_first(node *head)
{
    node *temp=head,*temp2,*new_node;
    int num;

    printf("enter the number you want to enter after the first node: ");
    scanf("%d",&num);

    new_node=memory();
    new_node->info=num;

    temp2=temp->next;
    temp->next=new_node;
    new_node->next=temp2;
    return head;
}
node *insert(node *head)
{
    node *temp = head,*new_node;
    int num;

    printf("enter data\n");
    scanf("%d",&num);

    new_node = memory();
    new_node -> info = num;

    if(head == 0)
        head = new_node;
    else
    {
        while(temp->next!=0)
        {
            temp = temp->next;
        }
        temp->next = new_node;

    }
    return head;
}
node *atlast(node *head)
{
    node *temp=head,*new_node=0;
    int num;

    printf("enter the number you want to insert in last");
    scanf("%d",&num);

    new_node=memory();
    new_node->info=num;

    while(temp->next!=0)
    {
        temp=temp->next;
    }
    temp->next=new_node;

    return head;
}
node *after_pos(node *head)
{
    node *temp=head,*temp2=0,*new_node;
    int num,pos,x=1;


    printf("Enter num: ");
    scanf("%d",&num);
    printf("Enter position");
    scanf("%d",&pos);

    new_node=memory();
    new_node->info=num;

    while(x<pos)
    {
        temp=temp->next;
        x++;
    }
    temp2=temp->next;
    temp->next=new_node;
    new_node->next=temp2;
    return head;
}
node *before_pos(node *head)
{
    node *temp=head,*temp2=0,*new_node;
    int num,pos,x=1;

    printf("enter the number: ");
    scanf("%d",&num);
    printf("enter the position before you want to insert: ");
    scanf("%d",&pos);

    new_node=memory();
    new_node->info=num;

    while(x<pos-1)
    {
        temp=temp->next;
        x++;
    }
    temp2=temp->next;
    temp->next=new_node;
    new_node->next=temp2;
    return head;
}

node *del_atpos(node *head)
{
    node * temp=head,*temp1=0;
    int pos,x=1;

    printf("Enter position: ");
    scanf("%d",&pos);

    while(x<pos-1)
    {
        temp=temp->next;
        x++;
    }

    temp1=temp->next->next;
    temp->next=temp1;

    return head;
}
node * del_first(node *head)
{
    node *temp=head,*temp1;
    temp1=temp->next;
    head=temp1;
    return head;
}

node *del_last(node * head)
{
    node *temp=head;
    while (temp->next->next!=NULL)
    {
        temp=temp->next;
    }
    temp->next=0;
    return head;
}
void display(node *head)
{
    node *temp = head;
    while(temp!=0)
    {
        printf("%d\t",temp->info);
        temp = temp->next;
    }

}
void count(node *head)
{
    node *temp=head;
    int x=0;

    while(temp!=0)
    {
        temp=temp->next;
       x++;
    }

    printf("Number Of nodes : %d ",x);

}
void main()
{
    node *head=0;
    int choice;
    do
    {
        printf("\n1.Insert\n2.Insert Before first node\n3.Insert after first node\n4.Insert before last node");
        printf("\n5.Insert after last node\n6.Insert before position\n7.Insert after position");
        printf("\n8.DeleteFirst node\n9.Delete last nodes\n10Delete at position");
        printf("\n11Display\n12.Count\n13Exit ");
        scanf("%d",&choice);
        switch(choice)
        {
        case 1:
        {
            head=insert(head);
            break;

        }
        case 2:
        {
            head=atfirst(head);
            break;

        }
        case 3:
        {
            head=after_first(head);
            break;
        }
        case 4:
            {

            }
        case 5:
            {
                head=atlast(head);
                break;
            }
        case 6:
            {
                head=before_pos(head);
                break;
            }
        case 7:
            {
                head=after_pos(head);
                break;
            }
        case 8:
            {
                if (head!=0)
                {
                    head=del_first(head);
                }
                else
                {
                    printf("Linked list is empty");
                }
                break;
            }
        case 9:
            {
                if (head!=0)
                {
                    head=del_last(head);
                }
                else
                {
                    printf("Linked list is empty");
                }
                break;
            }
        case 10:
            {
                 if (head!=0)
                {
                    head=del_atpos(head);
                }
                else
                {
                    printf("Linked list is empty");
                }
                break;
            }
        case 11:
            {

            display(head);
            break;
            }
        case 12:
            {
                count(head);
                break;
            }
        
        default:
            {
                printf("\aInvalid choice");
            }

        }

    }
    while(choice!=13);
}
