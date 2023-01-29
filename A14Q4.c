// Write a program to find the greatest number stored in an array of size 10. Take array values from the user.

#include<stdio.h>

int main()
{
    int arr[10], max=0;

    printf("Enter 10 elements:\n");
    for(int i=0; i<10; i++)
        scanf("%d",&arr[i]);

    for(int j=0; j<10; j++)
        if(max<arr[j])
            max = arr[j];

    printf("Gretest number stored in an array = %d\n",max);
    return 0;
}