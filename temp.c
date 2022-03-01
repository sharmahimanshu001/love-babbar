#include<stdio.h>
int main()
{
    float c,f;
    printf("enter temp in farenhit=");
    scanf("%f",&f);
    c=(f-32)/1.8;
    printf("temp in celsius=%.2f",c);
}