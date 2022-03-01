#include<stdio.h>
int gcd(int a,int b)
{
    if(a-(a/b)*b==0)
    return b;
    else
    return gcd(b,a-(a/b)*b);

}
int main()
{ 
    int p,q; 
    printf("Enter A: ");
    scanf("%d",&p);
    printf("Enter B: ");
    scanf("%d",&q);
    printf("GCD is %d",gcd(p,q));
}