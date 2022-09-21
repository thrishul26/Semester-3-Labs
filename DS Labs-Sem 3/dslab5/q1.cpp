#include <bits/stdc++.h>
using namespace std;
struct Node
{
int data;
Node *next;
};
struct LinkedList
{
Node *head;
LinkedList()
{
head = NULL;
}
LinkedList(int data)
{
head = (Node *)malloc(sizeof(Node));
head->data = data;
head->next = NULL;
}
Node *createNode(int data)
{
Node *p = (Node *)malloc(sizeof(Node));
p->data = data;
p->next = NULL;
return p;
}
void insertNode(int data)
{
Node *p = createNode(data);
if (head == NULL)
{
head = p;
return;
}
Node *it = head;
while (it->next != NULL)
it = it->next;
it->next = p;
}
void display()
{
Node *it = head;
while (it != NULL)
{
cout << it->data << " ";
it = it->next;
}
cout << endl;
}
};
int main()
{
;
LinkedList l1;
l1.insertNode(9);
l1.insertNode(11);
l1.insertNode(13);
l1.display();
LinkedList l2;
l2.insertNode(10);
l2.insertNode(12);
l2.insertNode(14);
l2.display();
LinkedList l3;
Node *it1 = l1.head;
Node *it2 = l2.head;
while (it1 != NULL and it2 != NULL)
{
if (it1->data <= it2->data)
{
l3.insertNode(it1->data);
it1 = it1->next;
}
else
{
l3.insertNode(it2->data);
it2 = it2->next;
}
}
while (it1 != NULL)
{
l3.insertNode(it1->data);
it1 = it1->next;
}
while (it2 != NULL)
{
l3.insertNode(it2->data);
it2 = it2->next;
}
l3.display();
return 0;
}