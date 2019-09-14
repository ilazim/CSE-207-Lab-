#include <stdio.h>
#include <stdlib.h>
#define MAXSIZE 10

int front1,
    front2 = 0,
    rear1,
    rear2 = -1;

int data[MAXSIZE];
int temp[MAXSIZE];

void push(int x)
{
    if (rear1>=MAXSIZE)
        printf("The stack is full");
    else
    {
      rear1++;
      data[rear1] = x;
    }

}
int dequeue()
{
    int a = data[front1];
    front1++;
    return a;
}

void transfer()
{
    int x;
    int y = rear1;
    for (x=0; x<=y; x++)
    {
        rear2++;
        temp[x] = dequeue();
    }

}
int pop()
{
    transfer();
    int b =temp[rear2];
    rear2++;
    return b;
}
int main()
{
    push(5);
    push(6);
    push(7);

    printf("%d",pop());
    return 0;
}
