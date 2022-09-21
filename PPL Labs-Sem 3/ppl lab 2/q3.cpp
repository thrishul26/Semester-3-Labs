//write a c++ program to count vowels and consonants in a string;Take your name as string
#include<bits/stdc++.h>
using namespace std;
int main()
{
    char name[]="THRISHUL";
    //VOVELS = A,E,I,O,U
    int count=0;
    char i;
    if( name[i] == 'A'|| name[i]=='E'||name[i]=='I'||name[i]=='O'||name[i]='U')
    {
        count=count +1;
    }
    cout<<"No. of  vovels in the string are "<<count;
return 0;
}