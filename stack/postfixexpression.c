#include<stdio.h>
#include<conio.h>
struct stack
{
    char s[30];
    int top;
}st;

void main()
{
    char infix[30];
    void intopost(char infix[30]);
    printf("\n enter the infix expression");
    scanf("%s",infix);
    intopost(infix);
    getch();
}

void intopost(char infix[30])
{
    st.top=-1;
    st.top=st.top+1;
    st.s[st.top]='$';
    char postfix[30];
    int i,j;
    char ch;
    int instack(char ch);
    int incoming(char ch);
    void push(char item);
    char pop();
    j=0;
    for(i=0;infix[i]!='\0';i++)
    {
        ch=infix[i];
        while(instack(st.s[st.top])>incoming(ch))
        {
            postfix[j]=pop();
            j++;
        }
        if(instack(st.s[st.top])!=incoming(ch))
            push(ch);
        else
            pop();    
    }
}