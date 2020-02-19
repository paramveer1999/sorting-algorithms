/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
                                                    Time Complexity(O(m+n)*log(m+n))
#include <iostream>
#include<algorithm>


using namespace std;
int mergetwoarray(int arr[],int brr[],int m,int n)
{
    int c[m+n],i;
    for(i=0;i<m;i++)
    {
        c[i]=arr[i];
    }
    for(i=0;i<n;i++)
    {
        c[i+m]=brr[i];
    }
    sort(c,c+m+n);
    for(i=0;i<m+n;i++)
    {
        cout<<c[i]<<" ";
    }
}

int main()
{
    int i,m,n,arr[100],brr[1000];
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
    mergetwoarray(arr,brr,m,n);

    return 0;
}
