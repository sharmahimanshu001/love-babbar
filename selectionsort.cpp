#include<iostream>
using namespace std;
int main()
{
    int a[5],i,j,temp,op,np;
    cout<<"Enter elements";
    for(i=0;i<5;++i)
    cin>>a[i];
    for(i=0;i<5;++i)
   { 
     op=i;
     np=i; 
     temp=a[op];

     for(j=i+1;j<5;++j)
     {if(temp>
     a[j])

     { temp=a[j];  
      np=j;
     }
      
     }
   }


    
for(j=0;j<5;++j)
cout<<"\t"<<a[j];
system("pause");
   

}