#include<stdio.h>
int main()
{
    int i,j;
    for(i=1;i<=4;++i)
    {
        printf("\n");
        for(j=1;j<=i;++j)
        printf("\t*");
    }
    



    int p,r,t;
    float si;
    printf("enter p=");scanf("%d",&p);
    printf("enter r=");scanf("%d",&r);
    printf("enter t=");scanf("%d",&t);
    si=p*r*t/100;
    printf("simple interest=%f",si);
    printf("*\n*\t*\n*\t*\t*\n*\t*\t*\t*");
    system("pause");
}