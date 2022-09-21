//write an increment function to increae each character by 1
#include<bits/stdc++.h>
using namespace std;
void increment(array,int b)
{
    // cout<<"size of the string is "<<b;
    for(int i=0;i<int b;i++)
    {
        cout<<array[i]+1;
    }
}
int main()
{
    char array(1000);
    cin.getline(array,1000);
    int b=strlen(array);
    char p=increment(array,strlen(array));
    cout<<p;
}
