#include<iostream>
using namespace std;
int  main()
{
   
    int a,b,s,n;
    for(n=1;n<=1000;++n)
    { s=0;
    for(a=n;a>0;a=a/10)
     {   
        b=a%10;
        s=s+b*b*b;

     }
     if(s==n)
     cout<<endl<<s;
    
   } 
     system("pause");
}