#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *next;
};
struct node *start = NULL;
void insert(int x)
{
    struct node *mem;
    mem = (struct node*)malloc(sizeof(struct node));
    mem->data=x;
    mem->next=NULL;
    if (start == NULL)
        start = mem;
    else
    {
        mem->next = start;
        start = mem;
    }
}
void traverse()
{
  struct node *t;
  t = start;
  while (t != NULL)
  {
      printf("%d", t->data);
      t=t->next;
  }
}
int main()
{
    int c, data;
    for(c=0;c<=2;c++)
    {
        scanf("%d", &data);
        insert(data);
    }
    traverse();
    return 0;
}
