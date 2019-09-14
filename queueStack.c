#include <stdio.h>
#include <stdlib.h>
#define MAXSIZE 10

int top=-1;
int count=-1;
int data[MAXSIZE];
int temp[MAXSIZE];

void push(int x)
{
    if (top>=MAXSIZE)
        printf("The queue is full");
    else
    {
        top++;
        data[top] = x;

    }

}
int pop()
{
    int a = data[top];
    top--;
    return a;
}

void transfer()
{
    int x;
    int y = top;
    for (x=0; x<=y; x++)
    {
        count++;
        temp[x] = pop();
    }

}
int dequeue()
{
    transfer();
    int b =temp[count];
    count--;
    return b;
}
int main()
{
    push(5);
    push(6);
    push(7);

    printf("%d",dequeue());
    return 0;
}
