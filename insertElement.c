#include <stdio.h>
#include <stdlib.h>
#define MAX 6


void print(int arr[]) //To print the elements
{
    int c;
    for (c=0; c<MAX; c++)
        printf("%d  ", arr[c]);
}
void insertElement(int arr[])
{
    printf("Enter the position to insert element: ");
    int pos;
    scanf("%d", &pos);
    printf("Enter the value of new element: ");
    int val;
    scanf("%d", &val);
    int c;
    for (c=MAX-1;c>=pos-1;c--)
        arr[c+1]=arr[c];
    arr[pos-1]=val;
}
void main() //Driver function;
{
    int arr[MAX] = {122,903,344,788,455};
    print(arr);
    printf("\n");
    insertElement(arr);
    print(arr);
}
