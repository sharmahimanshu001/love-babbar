/*#include<stdio.h>
int main()
{
    int a,b,c,d,e,n,s;
    printf("enter no.");scanf("%d",&n);
    a=n%10;
    b=(n/10)%10;
    c=(n/100)%10;
    d=(n/1000)%10;
    e=(n/10000)%10;
    s=a+b+c+d+e;
    printf("sum of digits=%d",s);
}*/
#include<stdio.h>
int main()
{
    int sum=0,a,n;
    scanf("%d",&n);
    a=n%10;
    sum=sum+a;
    n=n/10;
    a=n%10;
    sum=sum+a;
    n=n/10;
    a=n%10;
    sum=sum+a;
    n=n%10;
    sum=sum+n;
    printf("%d",sum);


}