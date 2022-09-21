//reverse a number
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    int reverse;          
    int d;                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                  
    cout<<"Enter the number:";
    cin>>n;
    int t=n;
    //int t=n;
    cout<<"Enter no. of digits in the number:";
    cin>>d;
    reverse=0;
    for(int i=0;i<d;i++)
    {
    reverse = reverse*10 + n%10;
    n=n/10;
    }
    cout<<reverse<<endl;
    //cout<<"Difference between the number and it's reverse is "<<t-reverse<<endl;
    int *a=&t;
    int *b=&reverse;
    cout<<"difference is:"<<*a-*b;
    return 0;
}