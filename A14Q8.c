// Write a program to find the second smallest number in an array.Take array values from the user

#include<stdio.h>
#include<limits.h>

int main()
{
    int arr[10];
    int smallest=INT_MAX, secondSmallest=INT_MAX;
    printf("Enter 10 numbers: \n");
    for(int i=0; i<10; i++)
        scanf("%d",&arr[i]);

    for(int i=0; i<10; i++)
    {
        if(arr[i]<smallest)
        {
            secondSmallest=smallest;
            smallest=arr[i];
        }
        else if(arr[i]<secondSmallest && arr[i]!=smallest)
            secondSmallest=arr[i];
    }
    printf("The second smallest element of an array = %d",secondSmallest);
    return 0;
}
