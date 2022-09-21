//1.write a c++ program to find a duplicate element from an array and then remove them
#include <bits/stdc++.h>
using namespace std;
void bubble_sort(int a[],int n)
{
    for(int times=1;times<n;times++)
    {
        for(int j=0;j<= n-times-1;j++)
        {
            if(a[j]>=a[j+1])
            {
                swap(a[j],a[j+1]);
            }
        }
    }
}
int main()
{
    int a[100];
    int n;
    cout<<"Enter mumnber of elements in the array: ";
    cin>>n;
   
    bubble_sort(a,n);
    int b[n];
    for(auto x : a)
    {
      
        cout<< x<<" ";
        
    
    }
   
   vector<int> v;

   for(in)


    
}