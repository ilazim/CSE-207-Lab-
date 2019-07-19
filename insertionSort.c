#include <stdio.h>
#include <stdlib.h>
#define MAX 5

int c,d,t;
void print(int arr[]) //To print the elements
{
    int c;
    for (c=0; c<MAX; c++)
        printf("%d  ", arr[c]);
}
void insertSort(int arr[])
{
    for (c = 1 ; c <= MAX - 1; c++)
    {
        d = c;

        while ( d > 0 && arr[d-1] > arr[d])
        {
            t        = arr[d];
            arr[d]   = arr[d-1];
            arr[d-1] = t;

            d--;
        }
    }
}
void main() //Driver function;
{
    int arr[MAX] = {122,903,344,788,455};
    print(arr);
    printf("\n");
    insertSort(arr);
    print(arr);
}
