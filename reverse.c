#include<stdio.h>
int main()
{
    int a,b,c,d,e,n,s;
    printf("enter no.");scanf("%d",&n);
    a=n%10;
    b=(n/10)%10;
    c=(n/100)%10;
    d=(n/1000)%10;
    e=(n/10000)%10;
    s=a*10000+b*1000+c*100+d*10+e;
    printf("reverse=%d",s);

    
}