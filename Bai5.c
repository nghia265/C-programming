#include<stdio.h>
int main()
{
    float C,F;
    printf("enter the value in celcius:");scanf("%f",&C);
    F=(C*1.8)+32;
    printf("\nF=%.2f",F);
    printf("\nenter the value in fahrenheit:");scanf("%f",&F);
    C-(F-32)/1.8;
    printf("\nC=%.2f",C);
    return 0;
}
