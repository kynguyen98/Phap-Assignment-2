#ifndef NUMBERLIST_H
#define NUMBERLIST_H
#include<iostream>
class numberlist{
    private:
    typedef struct node{
    int data;
    struct node*next;
}Node;
Node *head;
public:
numberlist (){
    head=nullptr;
}
~numberlist();
void appendnode(int );
void insernode(int );
void deletenode(int );
void display() const;
};
#endif
void numberlist::appendnode(int a){
    Node *newnode;
    Node *nodeptr;

    newnode= new Node;

    newnode->data=a;
    newnode->next=nullptr;

    if (!head) head=newnode;
    else {
        nodeptr=head;
    }
    while(nodeptr->next){
        nodeptr=nodeptr->next;
        nodeptr->next=newnode;
    }
}
/*void numberlist::display() const{
    Node *nodeptr;
    nodeptr=head;
    while(nodeptr){
        std::cout<<nodeptr->data<<std::endl;
        nodeptr=nodeptr->next;
    }
}*/