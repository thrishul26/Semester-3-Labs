//WAP to concancate 2 strings such that concancated string be arranged in the order of word length
//this code is without taking care of word length
#include<bits/stdc++.h>
using namespace std;
int main()
{
    char a[1000];
    cin.getline(a,1000);
    char b[1000];
    cin.getline(b,1000);
    cout<<"The length of string a is "<<strlen(a)<<endl;
    cout<<"The length of string b is "<<strlen(b)<<endl;
    char d[]="  ";
    //char c[2000];
    if(strlen(a)>=strlen(b))
    {
        cout<<strcat(a,strcat(d,b))<<endl;
    }
    else
    {
        cout<<strcat(b,strcat(d,a))<<endl;
    }
    //concancate string a and b to give c
    // int d=strlen(a);
    // int e=strlen(b);
    // for(int i=0;i<d;i++)
    // {
    //     c[i]=a[i];
    // }
    // for(int j=0;j<e;j++)
    // {
    //     c[d+j]=b[j];
    // }
    // for(int k=0;k<d+e;k++)
    // {
    //     cout<<c[k]<<" ";
    // }
    //now sort string c in the order of word length

    return 0;


}