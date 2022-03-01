#include <stdio.h>
void fun(int *arr,int N,int a)
{
	int i=N-1;
    while(a<arr[i]&&i>=0)
    {
        arr[i+1]=arr[i];
        i--;
    }
    arr[i+1]=a;
    N++;
    for(i=0;i<N;i++)
    {
        printf("%d ",arr[i]);
    }
}

int main()
{
	int N,a;
	printf("Enter N:");
	scanf("%d",&N);
	int arr[N];
	printf("Enter elements in a sorted array:");
	for (int i=0;i<N;i++)
	{
		scanf("%d",&arr[i]);
    }
    printf("Enter number to be inserted:");
    scanf("%d",&a);
    printf("\n");
    printf("After insertion array is: \n");
	fun(arr,N,a);   
}