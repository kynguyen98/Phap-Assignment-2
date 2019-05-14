#include"numberlist.h"
#include<iostream>
numberlist::numberlist(){
    head=nullptr;
}
numberlist::~numberlist(){
    delete head;
}
void numberlist::appendnode(int value){
    node*newnode;//TODO move through list
    node*nodeptr;//TODO move to pointer
    newnode= new node;
    newnode->data= value;
    newnode->next=nullptr;
    if (!head){
        head=newnode;
    }
    else {
        nodeptr=head;
        while (nodeptr->next)
        {
            nodeptr=nodeptr->next;

        }
        nodeptr->next=newnode;
    }
}
void numberlist::displaynode()const{
    node*nodeptr;//TODO move through list
    //node*nodeptr;
    nodeptr=head;
    while (nodeptr)
    {
        std::cout<<nodeptr->data<<"|"<<nodeptr<<"->";
        nodeptr=nodeptr->next;
    }
    std::cout<<std::endl;
    
}
void numberlist::insertnode(int value) {
    node* newnode;
    node*nodeptr;
    node*prenode=nullptr;
    newnode=new node;
    newnode->data=value;
    if (!head){
        head=newnode;
        newnode->next=nullptr;
    }
    else {
        nodeptr=head;
        while (nodeptr!=nullptr&&nodeptr->data<value)
        {
            prenode=nodeptr;
            nodeptr=nodeptr->next;
        }
        if (prenode==nullptr){
            head=newnode;
            newnode->next=nodeptr;
        }
        else{
            prenode->next=newnode;
            newnode->next=nodeptr;
        }
    }
}
void numberlist::deletenode(int value){
    node *nodeptr;
    node*prenode;
    if (!head){
        return;
    }
    if (head->data==value){
        nodeptr=head->next;
        delete head;
        head=nodeptr;
    }
    else{
        nodeptr=head;
    }
    while (nodeptr!=nullptr&&nodeptr->data!=value)
    {
        prenode=nodeptr;
        nodeptr=nodeptr->next;
    }
    if (nodeptr){
        prenode->next=nodeptr->next;
        delete nodeptr;
    }
    
}