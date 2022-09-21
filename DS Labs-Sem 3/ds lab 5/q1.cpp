#include <bits/stdc++.h>
using namespace std;
#define size 5
int Queue[size];
int front=-1;
int rear=-1;
void Enqueue(int item)
{
    if(rear==size-1)
    {
        cout << "Queue Full" << endl;
    }
    else
    {
        rear=rear+1;
        Queue[rear]=item;
    }
}
int Dequeue()
{
    int item_removed;
    if(front==rear)
    {
        cout << "Queue Empty" << endl;
    }
    else
    {
        front=front+1;
        item_removed=Queue[front];
    }
    return(item_removed);
}
void Display()
{
    if(front==rear)
    {
        cout << "Queue Empty" << endl;
    }
    else 
    {
        cout << "elements are: " << endl;
        for(int i=front+1;i<=rear;i++)
        {
            cout << Queue[i] << endl;
        }
    }
}
int main()
{
    Enqueue(2);
    Enqueue(3);
    Enqueue(4);
    Enqueue(5);
    Dequeue();
    Dequeue();
    Display();
    return 0;
}