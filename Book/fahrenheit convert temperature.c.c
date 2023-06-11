#include<stdio.h>
int main()
{
    //int f,c;
    float c,f;
    //f=64;
    printf("Enter Fahrenheit temperature:");
    scanf("%f",&f);
    c=(f-32)*5/9;
    printf("Temp in cel of given temperature %.2f = %.2f",f,c);
    return 0;
}
