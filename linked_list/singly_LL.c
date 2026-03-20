#include<stdio.h>
#include<stdlib.h>
struct node
{
    struct node *next;
    struct node *prev;
    int data;
};

struct node *head;
void insertion_beginning();
void insertion_last();
void insertion_specified();
void deletetion_beginning();
void deletetion_last();
void deletion_specified();
void display();
void search();


void main()
{
    int choice=0;
    while(choice!=9)
    {
        printf("\n*********Main Menu*********\n");  
        printf("\nChoose one option from the following list ...\n");  
        printf("\n1.insert in beginning \n2.insert at last \n3.insert at given location \n4.delete from beginning \n5.delete form last \n6.delete from given location \n7.search \n8.show \n9.exit \n");
        printf("\nenter yur choice..\n");
        scanf("\n%d",&choice);
        switch (choice)
        {
        case 1:
            insertion_beginning();
            break;
        case 2:
            insertion_last();
            break;
        case 3:
            insertion_specified();
            break;
        case 4:
            deletion_beginning();
            break; 
        case 5:
            deletion_last();
            break;
        case 6:
            deletion_specified();
            break;
        case 7:
            search();
            break;
        case 8:
            display();
            break;
        case 9:
            exit(0);
            break;    
        default:
            printf("\nplz enter valid choice!!!");
            break;
        }
    }
}

void insertion_beginning()
{
    struct node *ptr;
    int item;
    ptr=(struct node*)malloc(sizeof(struct node));
    if(ptr==NULL)
    {
        printf("\noverflow");
    }
    else
    {
        printf("\nenter item value:\n");
        scanf("%d",&item);
        
        ptr->data=item;
        ptr->next=head; 
        head = ptr;
        printf("\nnode inserted");
    }
}

void insertion_last()
{
    struct node *ptr,*temp;
    
        int item;
        ptr=(struct node*)malloc(sizeof(structnode));
        if(ptr==NULL);
        {
            printf("\noverflow");
        }
        else
        {
            printf("\nenter value..\n");
            scanf("%d",&item);
            ptr->data=item;
            if(head==NULL)
            {
                ptr->next=NULL;
                head=ptr;
                printf("\n node inserted");
            }
            else
            {
                temp=head;
                while(temp->next!=NULL)
                {
                    temp=temp->next;
                }
                temp->next=ptr;
                ptr->next=null;
                printf("\nnode inserted");
            }
        }    
}

void insertion_specified()
{
    int i,loc,item;
    struct node *ptr,*temp;
    ptr=(struct node*)malloc(sizeof(struct node));
    if(ptr==NULL)
    {
        printf("\noverflow");
    }
    else
    {
        printf("\nenter element value");
        scanf("%d",&item);
        ptr->data=item;
        printf("\nenter the location after which you want to insert");
        scanf("\n%d",&loc);
        temp=head;
        for(i=0;i<loc;i++)
        {
            temp=temp->next;
            if(temp == NULL)
            {
                printf("\ncan't insert");
                return;
            }
        }
        ptr->next=temp->next;
        temp->next=ptr;
        printf("\nnode inserted");
    }
}

void deletion_delete()
{
    struct node *ptr;
    if(head==NULL)
    {
        printf("\nlist empty\n");
    }
    else
    {
        ptr=head;
        head=ptr->next;
        free(ptr);
        printf("\nnode deleted from the beginning....");
    }
}

void last_delete()
{
    struct node *ptr,*ptr1;
}