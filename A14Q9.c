// Write a program in C to read n number of values in an array and display it in reverse order. Take array values from the user.

#include<stdio.h>

int main()
{
    int size=0;
    printf("Enter size of an array: ");
    scanf("%d",&size);
    int arr[size];

    printf("Enter %d numbers: \n",size);
    for(int i=0; i<size; i++)
        scanf("%d",&arr[i]);
    
    printf("Print array elements in reverse order :-\n");
    for(int i=size-1; i>=0; i--)
        printf("%d ",arr[i]);
    return 0;
}