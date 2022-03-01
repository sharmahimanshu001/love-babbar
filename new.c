#include<stdio.h>
#include<math.h>
int main()
{   int n;
    printf("enter n=");
    scanf("%d",&n);
    int i;
    int s=0;
    for(i=100;i<200;++i)
    {if(i%n==0)
     s=s+1;
    }
    printf("no.s are:%d",s);  


    
}