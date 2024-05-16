//Write a Program to perform the addition operation of two 1D arrays & store it in another array. Keep in mind that both array sizes must be the same.

#include<stdio.h>

int main(){

    int i , n  ;

    printf("Enter array size: ");
    scanf("%d", &n);

    int a[n];

    printf("Enter array A's elements: \n");

    for ( i = 0; i < n; i++)
    {
       printf("a[%d] = ", i);
       scanf("%d", &a[i]);
    }


    int b[n];

    printf("Enter array B's elements: \n");

    for ( i = 0; i < n; i++)
    {
       printf("b[%d] = ", i);
       scanf("%d", &b[i]);
    }

    printf("Array C is: ");
    int c[n];

    for ( i = 0; i < n; i++)
    {
        c[i] = a[i] + b[i];

        printf("%d ", c[i]);
    }


    return 0;

}

