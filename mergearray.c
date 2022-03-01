#include<stdio.h>
int main()
{   void sort(int ar[],int x);
    void merge(int ary1[],int ary2[],int ary3[],int y,int z);
    int a[100],b[100],c[100],i,n1,n2;
    printf("Enter N1: ");
    scanf("%d",&n1);
    printf("Enter array A: ");
    for(i=0;i<n1;++i)
    scanf("%d",&a[i]);
    printf("Enter N2: ");
    scanf("%d",&n2);
    printf("Enter array B: ");
    for(i=0;i<n2;++i)
    scanf("%d",&b[i]);
    sort(a,n1);
    sort(b,n2);
    merge(a,b,c,n1,n2);
    


}
void sort(int ar[],int x)
{
    int i,j,k;
     for(i=0;i<x-1;++i)
   { for(j=0;j<x-1-i;++j)
    {   if(ar[j]>=ar[j+1])
       {
        k=ar[j];
        ar[j]=ar[j+1];
        ar[j+1]=k;
       }
    }
   }
}
void merge(int ary1[],int ary2[],int ary3[],int y,int z)
{

    
    int i=0,j=0,k=0;
    while(i<y&&j<z)
    {
        if(ary1[i]<ary2[j])
        ary3[k++]=ary1[i++];
        else
        ary3[k++]=ary2[j++];
    }
    while(i<y)
	ary3[k++]=ary1[i++];
	while(j<z)
	ary3[k++]=ary2[j++];
    for(i=0;i<y+z;i++)
    {
        printf("%d ",ary3[i]);
    }


}


   