#include<iostream>
using namespace std;

int main()
{
    int a[100],i,j,k,n;
    printf("Enter N: ");
    scanf("%d",&n);
    printf("Enter array");
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);

    for(i=0;i<n-1;++i)
    {
        int minindex=i;
        for(j=i+1;j<n;++j)
        if(a[j]<a[i])
        {
            minindex=j;
            k=a[i];
            a[i]=a[j];
            a[j]=k;
        }    
 
    }
    for(i=0;i<n;i++)
    printf("%d ",a[i]);


}