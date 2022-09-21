#include<bits/stdc++.h>
using namespace std;
int main()
{
    int arr[]={1,25,3,6,4,8};
    int n=sizeof(arr)/sizeof(int);
    int key;
    cin>>key;
    for(int i=0;i<n;i++)
    {
        if(arr[i]==key)
        {
            cout<<i;
        }

    }
return 0;
}