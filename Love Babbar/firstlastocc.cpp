#include<iostream>
using namespace std;
int firstocc(int arr[],int x,int key)
{
    int s=0;
    int e=x-1;
    int mid=s+(e-s)/2,ans=-1;
    while(s<=e)
    {
        if(key==arr[mid])
        {
            ans=mid;
            e=mid-1;
        }
        if(key>arr[mid])
        {
            s=mid+1;

        }
        if(key<arr[mid])
        {
            e=mid-1;
        }
        mid=s+(e-s)/2;
    }
    return ans;

}
int lastocc(int arr[],int x,int key)
{
    int s=0;
    int e=x-1;
    int mid=s+(e-s)/2,ans=-1;
    while(s<=e)
    {
        if(key==arr[mid])
        {
            ans=mid;
            s=mid+1;
        }
        if(key>arr[mid])
        {
            s=mid+1;
        }
        if(key<arr[mid])
        {
            e=mid-1;
        }
        mid=s+(e-s)/2;

    }
    return ans;

}
int main()
{
    int arr1[6]={1,1,3,3,5,7};
    cout<<"First Occurence of 1 is"<<firstocc(arr1,6,7)<<endl;
    cout<<"Last Occurence of 1 is"<<lastocc(arr1,6,7);

}