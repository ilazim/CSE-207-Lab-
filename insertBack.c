#include <stdio.h>
#include <stdlib.h>
struct node //Struct to hold the elements
{
 int element;
 struct node * next;
};
struct node *start = NULL;
void insert(int x) // Helper to add elements
{
    struct node *ele, *temp;
    ele = (struct node*)malloc(sizeof(struct node));
    ele->element = x;
    ele->next = NULL;
    if (start == NULL)
        start = ele;
    else
    {
        temp = start;
     while(temp->next!=NULL)
     {
         temp = temp->next;
     }
     temp->next = ele;
    }
}
void traverse() // Function to print out the elements
{
    struct node *t;
    t = start;
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
    for(c=1;c<=n;c++)
    {
        printf("Enter the data for node number %d: ", c);
        scanf("%d", &data);
        printf("\n");
        insert(data);
    }
    traverse();
    return 0;
}
