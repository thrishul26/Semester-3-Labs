#include<bits/stdc++.h>
using namespace std;
int power(int a,int b)
{
    int product=1;
    int i;
    for(i=0;i< b;i++)
    {
        product=product*a;
    }
    return product;
}
int main()
{
    int a,b;
    cin>>a>>b;
    cout<<power(a,b);
    return 0;
}