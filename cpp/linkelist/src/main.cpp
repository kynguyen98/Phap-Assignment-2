#include"numberlist.cpp"
#include<iostream>
int main(){
	numberlist list;
	list.appendnode(12);
	list.appendnode(11);
	list.appendnode(10);
	list.insertnode(13);
	list.displaynode();
	list.deletenode(12);
	list.displaynode();
	return 0;
}