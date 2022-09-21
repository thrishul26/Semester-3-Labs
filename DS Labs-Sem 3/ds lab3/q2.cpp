//difference between a number N and it's reverse using pointer
#include<bits/stdc++.h>
using namespace std;
{
    int n,rem,rev=0;
cout<<"enter  number";
cin>>num;
    //find reverse of this number using pointer
int *ptr,*ptr2;
ptr=&num
ptr2=&rev;
do{(rem=*ptr%10);
*ptr2=(*ptr2*10+rem);
*ptr=*ptr/10;

}while(*ptr>0)
cout<<ptr2;






}
