/*
 * C program to find the largest  of three numbers
 */
 
#include <stdio.h>
 
biggest3()
{
    int a, b, c;
    printf("\n\nEnter three numbers: \na: ");
    scanf("%d", &a);
    printf("b: ");
    scanf("%d", &b);
    printf("c: ");
    scanf("%d", &c);
    if (a > b && a > c)
        printf("Biggest number is %d \n", a);
    if (b > a && b > c)
        printf("Biggest number is %d \n", b);
    if (c > a && c > b)
        printf("Biggest number is %d \n", c);
    //return 0;
}
