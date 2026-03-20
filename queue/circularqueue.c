#include<stdio.h>
#include<stdlib.h>
#define max 6
int queue[max];
int front = -1;
int rear= -1;

void enqueue(int element);
int dequeue();
int diplay();
// int isFull();


void enqueue(int element)
{
    if(front==-1 && rear==-1)
    {
        front=0;
        front=0;
        queue[rear]=element;
    }
    else if((rear+1)%max==front)
    {
        printf("queue is overflow..");
    }
    else
    {
        rear=(rear+1)%max;
        queue[rear]=element;
    }
}


int dequeue()
{
    if(front==-1 && rear==-1)
    {
        printf("queue is overflow.."); 
    }
    else if(front==rear)
    {
        printf("the dequeue element is %d",queue[front]);
        front=-1;
        rear=-1;
    }
    else
    {
        printf("\nthe dequeued element is %d",queue[front]);
        front = (front+1)%max;
    }
}

void display()
{
    int i=front;
    if(front == -1 && rear==-1)
    {
        printf("\nqueue is empty....");
    }
    else{
        printf("\nelements in a queue are:");
        while(i<=rear)
        {
            printf("\n%d\n",queue[i]);
            i=(i+1)%max;
        }
    }
}


int main()
{
    int choice=1 , x;
    while(choice<4 && choice!=0)
    {
        printf("\n1.insert \n2.delete \n3.display");
        printf("\nenter yr choices");
        scanf("%d",&choice);

        switch(choice)
        {
            case 1:
                printf("enter element to be inserted");
                scanf("%d",&x);
                enqueue(x);
                break;
            case 2:
                dequeue();
                break;
            case 3:
                display();

        }
    }
    return 0;
}