#include<vector>
using namespace std;

int max(vector<int> arr,int n)
{
    int temp=arr[0];
    for(int i=0;i<n;++i)
    {
        if(arr[i]>temp)
        temp=arr[i];
    }
    return temp;

}

bool ispossible(vector <int>arr,int n,int k,int mid)
{
    int cowcount=1;
    int cowsum=0;
    for(int i=0;i<n;++i)
   {
       if(arr[i]-cowsum<=mid)
       {
           cowsum=cowsum+arr[i];
       }
       else
       {
           cowcount++;
           if(cowcount>k||arr[i]>mid)
           return false;
       }
       cowsum=arr[i];
    }
   return true;

}  

int allocate(vector <int>arr,int n,int k)
{
    int start=0,sum=0;
    int end =max(arr,n);
    int mid=start+(end-start)/2;
    int ans=-1;
    
    while(start<=end)
    {
        if(ispossible)
        {
            ans=mid;
            end=mid-1;
        }
        else
        {
            start=mid+1;
        }
        return ans;
    }

}

int main()
{
    int ary[5]={4,6,1,2,3};
    
}