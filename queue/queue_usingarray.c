#include<stdio.h>
#include<stdlib.h>
#define maxsize 5
void insert();
void delete();
void display();
int front = -1, rear = -1;
int queue[maxsize];


void main()
{
    int choice;
    while(choice != 4)
    {
        printf("\n*************************Main Menu*****************************\n");  
        printf("\n1.insert \n2.delete \n3.display \n4.queue");
        printf("\nenter yur choice?\n");
        scanf("%d",&choice);
        switch (choice)
        {
        case 1:
            insert();
            break;
        case 2:
            delete();
            break;
        case 3:
            display();
            break;
        case 4:
            exit(0);
            break;
        default:
            printf("\nenter valid choice\n");
            break;
        }
    }
}

void insert()
{
    int item;
    printf("\nenter the element:\n");
    scanf("\n%d",&item);
    if(rear==maxsize-1)
    {
        printf("\noverflow!!!!!");
        return;
    }
    if(front==-1 && rear==-1)
    {
        front=0;
        rear=0;
    }
    else{
        rear=rear+1;
    }
    queue[rear]=item;
    printf("\nvalue inserted!!!!1");
}

void delete()
{
    int item;
    if(front==-1 || front>rear)
    {
        printf("\nunderflow!!!!");
        return;
    }
    else{
        item=queue[front];
        if(front==rear)
        {
            front=-1;
            rear=-1;
        }
        else{
            front=front+1;
        }
        printf("\nvalue deleted....");
    }
}


void display()
{
    if(rear==-1)
    {
        printf("\nempty queue....");
    }
    else
    {
        printf("\nprinting values.....");
        for(int i=front;i<=rear;i++)
        {
            printf("\n%d",queue[i]);
        }
    }
}
