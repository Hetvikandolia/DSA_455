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

void push(Stack* stack,char item)
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
    if(isempty(stack))
        return 1;
    int item;
    item = st.s[st.top];
        st.top--;
    return(item);
}

// void display()
// {
//     if(stempty())
//         printf("\n stack is empty!");
//     else
//         {
//             for(int i=st.top;i>=0;i--)
//             printf("%d",st.s[i]);
//         }    
// }

void reverse(char str[])
{
    int n=strlen(str);
    Stack* stack = createStack(n);

    for(int i=0;i<n;i++) 
        push(stack,str[i]);
        
    for(i=0;i<n;i++)
        str[i]=pop(stack);    
}

void main()
{
    char str[]="hetvi";
    reverse(str);
    cout<<"reversed string is"<< str << endl;
    return 0;
}