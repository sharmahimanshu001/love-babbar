#include<iostream>
using namespace std;

int sqrt(int n)
{
    int start=0,end=n;
    int ans=-1;
    int mid=start+(end-start)/2;
    while(start<=end)
    {
        if(mid*mid<n)
        {
            ans=mid;
            start=mid+1;
        }
        if(mid*mid>n)
        {
            end=mid-1;
        }
        if(mid*mid==n)
        {
            return mid;
        }
        mid=start+(end-start)/2;
    }
    return ans;
}

double moreprec(int n,int prec,int temp)
{
    double  fact=1;
    double answer=temp;
    for(int i=0;i<=prec;i++)
    {
        fact=fact/10;
        for(double j=temp;j*j<n;j=j+fact)
        {
            answer=j;
        }
    }
    return  answer;        

}

int main()
{
    int n,prec;
    cout<<"Enter N: ";
    cin>>n;
    cout<<"Enter Precission: ";
    cin>>prec;
    int temp=sqrt(n);
    cout<<moreprec(n,prec,temp);

}

    


