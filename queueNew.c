#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
};
struct node *front = NULL;
void enqueue(int data)
{
    struct node *temp;
    temp = (struct node*) malloc(sizeof(struct node));
    temp->data=data;
    temp->next= NULL;
    if (front == NULL)
        front = temp;
    else
    {
        struct node *end;
        end = front;
        while(end->next!=NULL)
        {
            end=end->next;
        }
        end->next=temp;
    }
}
int dequeue()
{
    if (front == NULL)
        return -1595;
    int v;
    v = front->data;
    struct node *temp;
    temp = front;
    front = front->next;
    free(temp);
    return v;
}
int main()
{
    enqueue(1);
    enqueue(2);
    enqueue(3);
    int count;
    for(count = 1; count<=4; count++)
    {
        int ret = dequeue();
        if (ret == -1595)
            printf("The queue is empty");
        else
            printf("%d\n", ret);
    }

    return 0;
}
