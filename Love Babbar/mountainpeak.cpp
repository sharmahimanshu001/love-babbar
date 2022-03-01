#include<iostream>
using namespace std;
int peakval(int ary[],int l)
{
    int start=0,end=l-1;
    int mid=start+(end-start)/2;
    while(start<end)
    {
        if(ary[mid]<ary[mid+1])
        {
            start=mid+1;
        }
        else
        {
            end=mid;
        }
        mid=start+(end-start)/2;
    }
    return ary[start];
}
int main()
{
    int arr1[5]={66,77,5,4,3};
    int arr[4]={3,4,5,1};
    cout<<"Peak Value is "<<peakval(arr,4);
    cout<<"Peak Value of arr11 is "<<peakval(arr1,5);
    
}