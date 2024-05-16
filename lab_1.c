//Write a Program to find the length of a 1D array.

#include<stdio.h>

int main(){

    int i, n , res ;

    printf("Enter array size: ");
    scanf("%d", &n);

    int a[n];

    printf("Enter array elements \n ");

    for ( i = 0; i < n; i++)
    {
        printf("a[%d] = ", i);
        scanf("%d", &a[i]);
    }

    res = i;

    printf("The length of array is %d", res);
    

    return 0;
}