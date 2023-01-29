// Write a program to calculate the average of numbers stored in an array of size 10. Take array values from the user.


#include<stdio.h>

int main()
{
    int arr[10], sum=0;
    double avg = 0.0;

    printf("Enter 10 elements:\n");
    for(int i=0; i<10; i++)
        scanf("%d",&arr[i]);

    printf("Array elements are: \n");
    for(int j=0; j<10; j++)
        printf("%d  ",arr[j]);

    printf("\nSum of elements of array: ");
    for(int k=0; k<10; k++)
        sum += arr[k];
    printf("%d",sum);

    avg = sum/10.0;
    printf("\nAvarage of numbers stored in array = %f",avg);
    return 0;
}