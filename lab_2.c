//Write a Program to find the average of a 1D array.

#include<stdio.h>

int main(){

    int i, n ;
    float avg , sum = 0;

    printf("Enter array size: ");
    scanf("%d", &n);

    int a[n];

    printf("Enter array elements \n ");

    for ( i = 0; i < n; i++)
    {
        printf("a[%d] = ", i);
        scanf("%d", &a[i]);

        sum += a[i]; 
    }

    avg =  sum / n;

    printf("Average of an array is %.2f", avg);
    

    return 0;
}