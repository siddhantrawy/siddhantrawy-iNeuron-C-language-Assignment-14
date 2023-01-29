//  Write a program to sort elements of an array of size 10. Take array values from the user.

#include<stdio.h>

int main()
{
    int arr[10];

    printf("Enter 10 numbers: \n");
    for(int i=0; i<10; i++)
        scanf("%d",&arr[i]);

    printf("Array elements before sorting :-\n");
    for(int i=0; i<10; i++)
        printf("%d  ",arr[i]);

    for(int i=0; i<10; i++)
    {
        for(int j=i; j<10; j++)
            if(arr[i]>arr[j])
            {
                int temp;
                temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
    }
    printf("\nArray elements after sorting :-\n");
    for(int i=0; i<10; i++)
        printf("%d  ",arr[i]);    
    return 0;
}