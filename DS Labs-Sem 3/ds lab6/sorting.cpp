#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> v={15,52,1,21,4,8};

    //BUBBLE SORT

    int times;
    for (int times = 0; times <v.size() ; times++)
    {
        for (int i = 0; i < v.size()-1; i++)
        {
            if(v[i+1]<v[i])
            {
                swap(v[i],v[i+1]);
            }
        }
    }
    for (int i = 0; i < v.size(); i++)
    {
        cout<<v[i]<<" ";
    }
    cout<<endl;

    //SELECTION SORT

    int min=v[0];
    for (int i = 1; i < v.size(); i++)
    {
        if(v[i]>min)
        {
            min=v[i];
            //take a and assign this the value of i
            int a=i;
        }

        swap(v[i],v[a])
    
    }


    //INSERTION SORT


    
    

    
    return 0;   
}