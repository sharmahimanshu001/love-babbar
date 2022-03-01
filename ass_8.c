#include<stdio.h>
int main()
{ int m=70,n=11,s=0;
 while(m%n>=0)
 {
     m=m+1;
     n=n+2;
     s=s+1;
 }

printf("%d",s);

}