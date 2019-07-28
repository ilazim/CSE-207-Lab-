#include <stdio.h>
#include <stdlib.h>
#define MAXSIZE 10

int front=0;
int rear=0;
int data[MAXSIZE];

void insert(int x)
{
    if (rear>=MAXSIZE)
        printf("The queue is full");
    else
    {

        data[rear] = x;
        rear++;
    }

}
int dequeue()

{
    int e=data[front];
    front++;
    return e ;

}
int main()
{
    insert(5);
    insert(6);
    insert(7);
    insert(8);
    int x = dequeue();
    printf("%d\n", x);
    x = dequeue();
    printf("%d\n", x);
    return 0;
}
