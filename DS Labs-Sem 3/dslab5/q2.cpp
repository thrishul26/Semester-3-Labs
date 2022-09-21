#include <bits/stdc++.h>
using namespace std;
struct node
{
    int data;
struct node *next;
};
struct node *create_node(int data)
{
struct node *p = (struct node *)malloc(sizeof(node));
p->data = data;
p->next = NULL;
return p;
}
void insert_node(struct node *head, int position, int info)
{
position--;
struct node *p = create_node(info);
struct node *it = head;
while (position-- > 0)
{
it = it->next;
}
p->next = it->next;
it->next = p;
}
void display(struct node *head)
{
struct node *it = head;
while (it != NULL)
{
cout << it->data << "-";
it = it->next;
}
cout<<endl;
}
int main()
{
struct node *head = (struct node *)malloc(sizeof(node));
head->data = 10;
head->next = NULL;
insert_node(head, 1, 5);
insert_node(head, 2, 6);
insert_node(head, 3, 7);
insert_node(head, 4, 19);
display(head);
struct node *current = head;
struct node *next = NULL;
struct node *prev = NULL;
// reverse fuction
while(current!=NULL){
next= current->next;
current->next = prev;
prev = current;
current = next;
}
head = prev;
display(head);
return 0;
}


