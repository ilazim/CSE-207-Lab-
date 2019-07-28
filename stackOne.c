#include <stdio.h>
#include <stdlib.h>
#define MAXSIZE 10

int top=0;
int count=0;
int data[MAXSIZE];

void push(int x)
{
    if (top>=MAXSIZE)
        printf("The stack is full");
    else
    {
        count++;
        data[top] = x;
        top++;
    }

}
int pop()
{
    if(top==0)
    {
        printf("No elements present in the stack");
        return 0;
    }

    else
    {
        top--;
        return data[top];
    }
}
int main()
{
    push(5);
    push(6);
    push(7);
    int x = pop();
    printf("%d", x);
    return 0;
}
