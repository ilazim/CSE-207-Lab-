#include <stdio.h>
#include <stdlib.h>
#define MAXSIZE 10
int top=-1;
int count=-1;
int data[MAXSIZE];
int temp[MAXSIZE];

void enqueue(int x)
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
    int b =temp[count];
    count--;
    return b;
}
int main()
{
    enqueue(5);
    enqueue(6);
    enqueue(7);
    transfer();
    printf("%d",dequeue());
    return 0;
}
