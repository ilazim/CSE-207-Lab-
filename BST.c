#include <stdio.h>
#include <stdlib.h>
struct node
{
    struct node* left;
    struct node* right;
    int data;
};
struct node* start = NULL;
struct node* newNode(int x)
{
    struct node *mem;
    mem = (struct node*)malloc(sizeof(struct node));
    mem->data=x;
    mem->left=mem->right = NULL;
    return mem;
}
struct node* Insert (struct node* start, int data)
{
    if (start==NULL)
    {
        start=newNode(data);
    }
    else if(data<= start->data)
    {
        start->left = Insert(start->left,data);
    }
    else
    {
        start->right = Insert(start->right,data);
    }
    return start;
}
int find(struct node* start,int data)
{
    if(start == NULL)
    {
        return 0;
    }
    else if(start->data == data)
    {
        return 1;
    }
    else if(data <= start->data)
    {
        return find(start->left,data);
    }
    else
    {
        return find(start->right,data);
    }
}
void init()
{
    printf("Enter the number of elements:");
    int n;
    scanf("%d", &n);
    int i, d;

    for(i=0; i<n; i++)
    {
        printf("Enter the value for node %d: ",i);
        scanf("%d",&d);
        start = Insert(start,d);
    }
}
void search()
{
    int key;
    printf("enter a number to search for:");
    scanf("%d", &key);

    if(find(start, key)==1)
        printf("%d is in the tree.", key);
 
    else if(find(start, key)==0)
        printf("%d is not in the tree.", key);
}
int main()
{
    init();
    search();
    return 0;
}
