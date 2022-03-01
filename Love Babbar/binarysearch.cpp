#include<iostream>
using namespace std;

int binarysearch(int arr[],int size,int key)
{
    int start=0;
    int end =size-1;
    int mid= start+(end-start)/2;
    while(start<=end)
    {
        if(arr[mid]==key)
        return mid;
        if(key>arr[mid])
        {
            start =mid+1;   
        }
        else
        {
            end=mid-1;
        }
        mid= start+(end-start)/2;
        

    }
    return -1;
}
int main()
{
    int even[6]={1,4,7,56,346,567};
    int odd[5]={23,67,78,98,104};
  cout<< binarysearch(odd,5,346)<<endl;


system("pause");
}