#include <stdio.h>
#include <stdlib.h>
#define MAX 5
void swap(int *p1, int *p2) //External swap function
{
    int temp = *p1;
    *p1 = *p2;
    *p2 = temp;
}
void sort(int arr[]) //To sort the elements
{
    int i,j;
    for (i=0; i<MAX-1; i++)
        for(j=0; j<MAX-i-1; j++)
            if(arr[j]>arr[j+1])
                swap(&arr[j],&arr[j+1]);
}
void print(int arr[]) //To print the elements
{
    int c;
    for (c=0;c<MAX;c++)
        printf("%d  ", arr[c]);
}
void main() //Driver function;
{
    int arr[MAX] = {122,903,344,788,455};
    sort(arr);
    print(arr);
}
