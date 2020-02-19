/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;
int mergearray(int arr[],int brr[],int m,int n)
{
    int i=0,j=0;
    while(i<m&&j<n)
    {
        if(arr[i]<brr[j])
        {
            cout<<arr[i++]<<" ";
        }
        else
        {
            cout<<brr[j++]<<" ";
        }
    }
    while(i<m)
    {
        cout<<arr[i++]<<" ";
    }
    while(j<n)
    {
        cout<<brr[j++]<<" ";
    }
}

int main()
{
    int i,m,n,arr[100],brr[100];
    cin>>m;
    for(i=0;i<m;i++)
    {
        cin>>arr[i];
    }
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>brr[i];
    }
    mergearray(arr,brr,m,n);

    return 0;
}
