// Write a program in C to copy the elements of one array into another array.Take array values from the user.

#include<stdio.h>

int main()
{
    int size=0;
    printf("Enter size of an array: ");
    scanf("%d",&size);
    int arr1[size], arr2[size];

    printf("Enter %d numbers: \n",size);
    for(int i=0; i<size; i++)
        scanf("%d",&arr1[i]);

    //Copy elements of one array to another array
    for(int i=0; i<size; i++)
        arr2[i]=arr1[i];

    printf("Elements of copied array: \n");
    for(int i=0; i<size; i++)
        printf("%d  ", arr2[i]);

    return 0;
}