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
int main()
{
    int test;
    printf("enter a number to find for:");
    scanf("%d", &test);
    start = Insert(start,1);
    start = Insert(start,5);
    start = Insert(start,2);
    start = Insert(start,7);
    start = Insert(start,8);
    start = Insert(start,55);
    if(find(start, test)==1)
        printf("%d is in the tree.", test);
    else if(find(start, test)==0)
        printf("the tree is empty");
    else
        printf("%d is not in the tree.", test);
    return 0;
}
