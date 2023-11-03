/*
to swap the value of two variables.
INPUT:
 a,b are 2 integers
OUTPUT:
 the swap value of a, b

 algorithm:
 1. we create a new variable to hold the value of a
 2. change the value of a and b
 3. print the result
*/
#include<stdio.h>
int main()
{
    int a =5, b=-6;
    printf("Before a=%d;b=%d",a,b);
    int temp =a;
    a=b;
    b=temp;
    printf("\nAfter a=%d; b=%d",a,b);
}
