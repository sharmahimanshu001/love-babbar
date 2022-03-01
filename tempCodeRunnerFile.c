#include <stdio.h>
int main()
{
    int i=0,j=0,k=0;
    int ary1[]={1,3,5,7};
    int n1=sizeof(ary1)/sizeof(ary1[0]);
    int ary2[]={2,4,6,8};
    int n2=sizeof(ary2)/sizeof(ary2[0]);
    int ary3[n1+n2];
    while(i<n1&&j<n2)
    {
        if(ary1[i]<ary2[j])
        ary3[k++]=ary1[i++];
        else
        ary3[k++]=ary2[j++];
    }
    while(i<n1)
	ary3[k++]=ary1[i++];
	while(j<n2)
	ary3[k++]=ary2[j++];
    for(i=0;i<n1+n2;i++)
    {
        printf("%d ",ary3[i]);
    }
}
