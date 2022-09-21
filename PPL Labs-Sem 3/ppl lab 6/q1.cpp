#include<bits/stdc++.h>
using namespace std;
class Node
{
    int data;
    Node* next;
    public:
    Node(int d):data(d),next(NULL){}
}   
class List{
    Node * head;
    Node * tall;
    public:
    List():head(NULL),tail(NULL){}
    void push_front(int data)
    {
        if(head==NULL)
        {
            Node * n = new Node(data);
            head=tail=n;
        }
        else
        {
            Node*n=new Node(data);
            n->next = head;
            head = n;
        }
    }
}
int main()
{
    int arr[]={12,25,45,78,96,0};
    for (int i = 0; i < sizeof(arr); i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}