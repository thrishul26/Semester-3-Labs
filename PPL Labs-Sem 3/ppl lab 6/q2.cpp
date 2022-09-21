#include <iostream>

using namespace std;

class node{
    public:
  int data;
  node * next;
};
void addNode(int x,node *last){
    node*temp=new node();
    last -> next=temp;
    temp -> data=x;
    temp -> next=NULL;
   
    
}

void display(node * temp){
    if(temp==NULL) return;
    cout<<temp->data<<" ";
    display(temp->next);
    
}
int main()
{   
    node * first=new node();
    first->data=95;
    node*last=first;
    int arr[10]={1,2,3,4,5,6,7,8,9,10};
    for(int i=0;i<10;i++){
        addNode(arr[i],last);
        last=last->next;
    }
    node * temp=first;
    display(temp);
}
