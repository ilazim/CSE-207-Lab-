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
      printf("%d\n", t->data);
      t=t->next;
  }
}
int main()
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
