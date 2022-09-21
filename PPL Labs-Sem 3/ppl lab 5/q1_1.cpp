#include<bits/stdc++.h>
using namespace std;
void increment(char arr[],int n)
{
    for(int i=0;i<n;i++)
    {
        arr[i]=arr[i]+1;
    }
    cout<<arr;
}
int main()
{
    int n;
    cout<<"size of chracter array";
    cin>>n;
    char arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    increment(arr,n);
}