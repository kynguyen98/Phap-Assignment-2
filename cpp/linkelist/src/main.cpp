#include"numberlist.h"
#include <iostream>
//#include<stdio.h>

/*struct node
{
	int data;
	node *next;
};
class list{
	private:
	node *head,*tail;
	public:
	list(){
		delete head;
		delete tail;
	}
	void createnode(int value){
		node *temp=new node;
		temp->data=value;
		temp->next=NULL;
		if (head==NULL){
			head=temp;
			tail=temp;
			temp=NULL;
		}
		else {
			tail->next=temp;
			tail=temp;
		}
	}
	void display(){
		node *temp=new node;
		temp=head;
		while(temp!=NULL){
			std::cout<<temp->data<<"-->";
			temp=temp->next;
		}
		std::cout<<"NULL\n\n"
;	}
void insert_start(int value){
	node *temp=new node;
	temp->data=value;
	temp->next=head;
	head=temp;
}
void insert_end(int value){
	node *temp=new node;
	temp->data=value;
	temp->next=NULL;
	tail->next=temp;
	tail=temp;
}
void insert_position(int pos, int value){
	node *pre=new node;
	node *cur=new node;
	node *temp=new node;
	cur=head;
	for (int i=1;i<pos;i++){
		pre=cur;
		cur=cur->next;
	}
		temp->data=value;
		pre->next=temp;
		temp->next=cur;
	}
void delete_first(){
		node *temp=new node;
		temp=head;
		head=head->next;
		delete temp;
}
void delete_last(){
	node *current=new node ;
	node *previous=new node;
	current=head;
	while (current->next!=NULL){
previous=current;
current=current->next=NULL;
	}
	tail=previous;
	previous->next=NULL;
	delete current;
}
void delete_position(int pos){
	node *current=new node;
	node *previous=new node;
	current=head;
	for (int i=1;i<pos;i++){
		previous=current;
		current=current->next;
	}
	previous->next=current->next;
}
};
int main(int argc, char *argv[]) {
	list l;
	int n;
	std::cout << "Hello Easy C++ project!" << std::endl;
	std::cout<<"List size: ";std::cin>>n;
	for (int i=1;i<n;i++){
		int value;
		std::cout<<"\nValue of node: "+i;std::cin>>value;
		l.createnode(value)
	;}
	l.display();
	l.insert_start(8);
	l.insert_end(5);
	l.insert_position(3,6);
	l.display();
	l.delete_first();
	l.delete_last();
	l.delete_position(3);
	l.display();
	getchar();
	return 0;
}*/

int main (){
	numberlist list;
	list.appendnode(12);
	list.appendnode(5);
	list.appendnode(7);
	//list.display();
	return 0;
}