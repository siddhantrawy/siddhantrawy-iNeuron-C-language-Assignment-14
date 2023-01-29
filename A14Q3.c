// Write a program to calculate the sum of all even numbers and sum of all odd numbers, which are stored in an array of size 10. Take array values from the user.

#include<stdio.h>

int main()
{
    int arr[10], evenSum=0, oddSum=0;

    printf("Enter 10 elements:\n");
    for(int i=0; i<10; i++)
        scanf("%d",&arr[i]);

    for(int j=0; j<10; j++)
        if(arr[j]%2==0)
            evenSum += arr[j];
    printf("Sum of even numbers present in array = %d\n",evenSum);

    for(int k=0; k<10; k++)
        if(arr[k]%2!=0)
            oddSum += arr[k];
    printf("Sum of odd numbers present in array = %d\n",oddSum);

    return 0;
}