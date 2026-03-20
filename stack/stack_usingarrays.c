// #include<stdio.h>
// int stack[100],choice=0,n,top=-1,x,i;
// void push(void);
// void pop(void);
// void display(void);
// int main()
// {
//     // top=1;
//     printf("\n enter the size of stack max[100]:\n");
//     scanf("%d",&n);
//     printf("\n stack operations using arrays");
//     printf("\n\t--------------------------------");

//     printf("\n1.push \n2.pop \n3.display \n4.exit\n");
//     do
//     {
//         printf("\n enter the choice:");
//         scanf("%d",&choice);
//         switch(choice)
//         {
//             case 1:
//             {
//                 push();
//                 break;
//             }
//             case 2:
//             {
//                 pop();
//                 break;
//             }
//             case 3:
//             {
//                 display();
//                 break;
//             }
//             case 4:
//             {
//                 printf("\n exit point ");
//                 break;
//             }
//             default:
//             {
//                 printf("\n plz enter valid choice!!!");
//             }

//         }
//     } while(choice!=4);
//     return 0;

// }

// void push()
// {
//     if(top==n)
//     {
//         printf("\n stack is overflow!!!");
//     }
//     else{
//         printf("\n enter a value to be pushed:");
//         scanf("%d",&x);
//         top++;
//         stack[top]=x;
//     }
// }

// void pop()
// {
//     if(top==-1)
//     {
//         printf("\nstack is underflow!!!!");
//     }
//     else{
//         printf("the popped element is %d",stack[top]);
//         top--;
//     }
// }

// void display()
// {
//     if(top>=0)
//     {
//         printf("\nthe element in stack");
//         for(int i=top;i>=0;i--)
//         printf("\n %d \n",stack[i]);
//         printf("\n press next choice");

//     }
//     else{
//         printf("\n the stack is empty");
//     }
// }


#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#define size 5

struct stack{
    int s[size];
    int top;
}st;

int stfull()
{
    if(st.top>=size-1)
    return 1;
    else
    return 0;
}

void push(int item)
{
    st.top++;
    st.s[st.top]=item;
}

int stempty()
{
    if(st.top==-1)
        return 1;
    else
        return 0;    
}

int pop()
{
    int item;
    item = st.s[st.top];
        st.top--;
    return(item);
}

void display()
{
    if(stempty())
        printf("\n stack is empty!");
    else
        {
            for(int i=st.top;i>=0;i--)
            printf("%d",st.s[i]);
        }    
}

void main()
{
    int item,choice;
    char ans;
    st.top=-1;
    // clrscr();
    printf("\n implementation of stack using array \n");
    do{
        printf("\n main menu\n");
        printf("\nn1.push \n2.pop \n3.display \n4.exit");
        printf("enter your choices:");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1:
                printf("\n enter item to be pushed:");
                    scanf("%d",&item);
                    if(stfull())
                        printf("\nstack is full!");
                    else
                    push(item);
            break;

            case 2:
                if(stempty())
                    printf("\n empty stackoverflow !!");
                else    
                    {
                        item =pop();
                        printf("\n the popped element is %d",item);
                    }            
            break;

            case 3:
                display();
            break;

            case 4:
                exit(0);            
        }
        printf("\n do you want to continue?");
        ans=getche();
    }while(ans=='Y' || ans=='y');
    getch();
}