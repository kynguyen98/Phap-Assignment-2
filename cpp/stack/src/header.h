#ifndef intstack_h
#define intstack_h
#include<iostream>
class mystack{
    private:
    int *stackarray; //stack array
    int stacksize,top;// stack size and top
    public:
    mystack(int); //constructor
    ~mystack(){//destructor or free up memeory 

        return;
    }
    void push(int); //push 
    int size();
    int pop();  //pop
    bool isfull() const; //check is full
    bool isempty() const;//check is empty
    void display();
};
#endif
mystack::mystack(int size){
    stackarray=new int[size];
    stacksize=size;
    top=-1;
}
void mystack::push(int num){
    if(!isfull())
    {top=top+1;
    stackarray[top]=num;
    std::cout<<stackarray[top]<<std::endl;
    }
    else std::cout<<"stack is full"<<std::endl;
}
int mystack::size(){
    return top+1;
}
bool mystack::isfull() const{
    if (top==stacksize-1) return true;
    else return false;
}
bool mystack::isempty() const{
    if (top==-1) return true;
    else return false;
}
void mystack::display(){
    for (int i=top;i>=0;i--){
        std::cout<<stackarray[i]<<std::endl;
    }
    std::cout<<"Top of stack is: "<<stackarray[top]<<std::endl;
    std::cout<<"Bottom stack is: "<<stackarray[0]<<std::endl;
}
int mystack::pop(){
    if (isempty()){
        std::cout<<"Stack is already empty"<<std::endl;
    }
    else {
        std::cout<<"removing "<<stackarray[top]<<std::endl;}
;
return stackarray[top--];
    }