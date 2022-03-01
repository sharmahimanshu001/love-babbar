#include<iostream>
using namespace std;
int main()
{
    int a[100],i,j,k;
    for(i=0;i<5;++i)
    cin>>a[i];
    for(i=0;i<4;++i)
   { for(j=0;j<4-i;++j)
    {   if(a[j]>=a[j+1])
       {
        k=a[j];
        a[j]=a[j+1];
        a[j+1]=k;
       }
    }
   }
    for(i=0;i<5;++i)
    cout<<"\t"<<a[i];
    system("pause");
}