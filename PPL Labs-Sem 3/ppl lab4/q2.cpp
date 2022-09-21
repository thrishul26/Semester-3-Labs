//WAP to reverse alternate words of a character array
// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {
// }


//reverse a string using for loop
// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {
//     char a[1000];
//     cin.getline(a,1000);
//     int b=strlen(a);
//     for(int i=0;i<b;i++)
//     {
//         cout<<a[b-i-1];
//     }
//     return 0;
// }
//reverse a string using stl functions
#include<bits/stdc++.h>
using namespace std;
int main()
{
    char a[1000];
    cin.getline(a,1000);
    cout<<strreverse(a);
    return 0;
}