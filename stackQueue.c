#include <stdio.h>
#include <stdlib.h>
#define MAXSIZE 10

int front1 = 0,
    front2 = 0,
    rear1 = -1,
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
   // printf("a=%d\n", a);

    front1++;
    return a;
}

void transfer()
{
    int x;
    //int y = rear1-1;
   // printf("%d\n", y);
    for (x=rear1; x>=0; x--)
    {
        rear2++;
        temp[x] = dequeue();
       // printf("x=%d\n", x);
        //printf("temp,x=%d\n", temp[x]);

    }

}
int pop()
{
    int b = temp[front2];
       // printf("%d::", front2);

    front2++;
    return b;
}
int main()
{
    push(5);
    push(6);
    push(7);
   // printf("%d\n", rear1);

    transfer();
    printf("%d", pop());
    printf("%d", pop());
    printf("%d", pop());



    return 0;
}
