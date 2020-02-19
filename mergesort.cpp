/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;
int merge(int arr[],int l,int m,int r)
{
    int n1=m-l+1;
    int n2=r-l;
    int left[n1],right[n2],i,j,k;
    for(i=0;i<n1;i++)
    {
        left[i]=arr[l+i];
    }
    
    
    for(j=0;j<n2;j++)
    {
        right[j]=arr[m+1+j];
    }
    i=0,j=0,k=1;
    while(i<n1&&j<n2)
    {
        if(left[i]<=right[j])
        {
            arr[k++]=left[i++];
        }
        else
        {
            arr[k++]=right[j++];
        }
    }
    while(i<n1)
    {
        arr[k++]=left[i++];
    }
    while(j<n2)
    {
        arr[k++]=right[j++];
    }
    
}
int mergesort(int arr[],int l,int r)
{
    
    
    if(r>l)
    {
        int mid=l+(r-l)/2;
        mergesort(arr,l,mid);
        mergesort(arr,mid+1,r);
        merge(arr,l,mid,r);
    }
}

int main()
{
    int i,arr[1000],n;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    mergesort(arr,0,n-1);
    for(i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }

    return 0;
}
