//two codes are included in this
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int arr[1000];
    int n;
    int i;
    cout<<"Enter no. of elements in the array:";
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int sum=arr[0];
    for(i=2;i<n;i=i+2)
    {
        sum=sum+arr[i];
    }
    cout<<"The sum of elements at the odd positions in the array is "<<sum<<endl;
    //reversing the array
    int b[1000];
    for(i=0;i<n;i++)
    {
        int b[1000];
        b[i]=arr[n-i-1];
        cout<<b[i]<<" ";
    }
    return 0;
}