#include<bits/stdc++.h>
using namespace std;

struct Node{
	int data;
	struct Node * next;
};

struct Node* createList(){
	struct Node* head=(struct Node *)malloc(sizeof(Node));
	head->data=-1;
	head->next=NULL;
	return head;
}

struct Node* createNode(int data){
	struct Node * p=(struct Node *)malloc(sizeof(Node));
	p->data=data;
	p->next=NULL;
	return p;
}

void insertNode(struct Node* head, int info, int idx){
	idx++;
	struct Node* p=createNode(info);
	struct Node* it=head;
	while(idx-->1)it=it->next;
	p->next=it->next;
	it->next=p;
}

void insertNode(struct Node* head, int info){
	struct Node *p=createNode(info);

	struct Node* it=head;
	while(it->next!=NULL)it=it->next;
	it->next=p;
}

void deleteNode(struct Node* head, int idx){
	idx++;
	struct Node* it=head;
	while(idx-->1)it=it->next;
	struct Node* p=it->next;
	it->next=p->next;
	free(p);
}

void display(struct Node* head){
	struct Node* it=head->next;
	while(it!=NULL){
		cout<<it->data<<" ";
		it=it->next;
	}
	cout<<endl;
}


int main(){

	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);

	struct Node* head=createList();
	insertNode(head, 1);
	insertNode(head, 2);
	insertNode(head, 3);
	insertNode(head, 4);
	insertNode(head, 5);
	display(head);
	deleteNode(head, 4);
	display(head);
	insertNode(head, 15, 1);
	display(head);
	return 0;
}