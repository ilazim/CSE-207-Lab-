#include <stdio.h>
#include <stdlib.h>
#define MAX 5
void swap(int *p1, int *p2) //External function to swap, can be done in sort function too.
{
    int temp = *p1;
    *p1 = *p2;
    *p2 = temp;
}
void sort(int arr[], int n) //Function to sort the values.
{
    int i,j;
    for(i=0; i < n - 1; i++)
        for(j=0; j<n-i-1; j++)
        {
            if (arr[j]>arr[j+1])
                swap(&arr[j],&arr[j+1]);
        }

}
void print(int arr[], int n) //Prints the array.
{
    int c;
    for(c=0;c<=n-1;c++)
    {
        printf("%d\t", arr[c]);
    }

}
int main() //Driver function.
{
    int arr[MAX] = {4,5,3,23,567};
    int n = MAX;
    sort(arr,n);
    print(arr,n);
    return 0;
}
