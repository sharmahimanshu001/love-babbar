#include<iostream>
using namespace std;
int pivotelement(int ary[],int l)
{
    int start=0,end=l-1;
    int mid=start+(end-start)/2,ans=-1;
    while(start<end)
    {
        if(ary[mid]>=ary[0])
        {
            start=mid+1;

        }
        else 
        {
            end=mid;
        }
        mid=start+(end-start)/2;
    }
    return start;

}
int main()
{
    int arr[5]={3,8,10,17,1};
    cout<<pivotelement(arr,5);

}