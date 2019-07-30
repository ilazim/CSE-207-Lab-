#include <stdio.h>
#include <stdlib.h>
struct node //Struct to hold the elements
{
    int element;
    struct node * next;
};
struct node *tos = NULL;
struct node *p = NULL;
void push(int x) // Helper to add elements
{
    struct node *ele, *temp;
    ele = (struct node*)malloc(sizeof(struct node));
    ele->element = x;
    ele->next = NULL;
    if (tos == NULL)
        tos = ele;
    else
    {
        temp = tos;
        while(temp->next!=NULL)
        {
            temp = temp->next;
        }
        temp->next = ele;
    }
}
int pop()
{
    struct node *temp, *secondLast;

        temp = tos;
        secondLast = tos;
        while(temp->next != NULL)
        {
            secondLast = temp;
            temp = temp->next;
        }

        if(temp == tos)
        {
            tos = NULL;
        }
        else
        {

            secondLast->next = NULL;
        }

        free(temp);

    }



void traverse() // Function to print out the elements
{
    struct node *t;
    t = tos;
    while (t!= NULL)
    {
        printf("%d\n", t->element);
        t=t->next;
    }
}
int main() //Driver function
{
    int c, data,n=0;
    printf("Enter the number of nodes:");
    scanf("%d", &n);
    for(c=1; c<=n; c++)
    {
        printf("Enter the data for stack pos %d: ", c);
        scanf("%d", &data);
        printf("\n");
        push(data);
    }
    pop();
    traverse();
    return 0;
}
