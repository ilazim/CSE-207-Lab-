#include <stdio.h>
#include <stdlib.h>
struct node
{
    int elementl;
    
    struct node *next;
};
struct node *start = NULL;
void insert(int item)
{
    struct node *dm;
    dm = (struct node*)malloc(sizeof(struct node));
    dm->elementl=item;
    dm->next = NULL;
    if (start == NULL)
        start = dm
    else
    {
        dm->next = start;
        start = dm;
        
    }
}
void main()
{
    struct node *p;
    p=(struct node*)malloc(sizeof(struct node));
    
}
