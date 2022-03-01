#include <stdio.h>

void fun(int *ary,int N)
{
    int *i=ary,*j=&ary[N-1];
    while (i<j) 
    {
        int temp=*i;
        *i=*j;
        *j=temp;
        i++;
        j--;
    }
}

void show(int *ary,int N)
{
    int *len=ary+N,*i=ary;
    for(i=ary;i<len;i++)
    {
        printf("%d ",*i);
    }
}

int main()
{
    int N;
    printf("Enter N:");
    scanf("%d",&N);
    int ary[N];
    printf("Enter elements of array:");
    for(int i=0;i<N;i++)
    {
        scanf("%d",&ary[i]);
    }
    printf("Output:");
    fun(ary,N);
    show(ary,N);
}