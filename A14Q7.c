// Write a program to find second largest number in an array.Take array values from the user.

#include<stdio.h>
#include<limits.h>

int main()
{
    int arr[10];
    int largest=INT_MIN, secondLargest=INT_MIN;
    printf("Enter 10 numbers: \n");
    for(int i=0; i<10; i++)
        scanf("%d",&arr[i]);

    for(int i=0; i<10; i++)
    {
        if(arr[i]>largest)
        {
            secondLargest=largest;
            largest=arr[i];
        }
        else if(arr[i]>secondLargest && arr[i]!=largest)
            secondLargest=arr[i];
    }
    printf("The second largest element of an array = %d",secondLargest);
    return 0;
}