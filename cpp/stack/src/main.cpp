#include <iostream>
#include"header.h"
int main(int argc, char *argv[]) {
	mystack stack(6);
	int catchvar;
	std::cout << "Hello Easy C++ project!" << std::endl;
	while(!stack.isfull()){
		int n;
		std::cout<<"Enter value: ";std::cin>>n;
		stack.push(n);
		system("clear");
	}
	std::cout<<"Stack size is "<<stack.size()<<std::endl;
	//stack.pop();
	//stack.pop();
	stack.display();
	std::cout<<stack.isempty()<<std::endl;
	std::cout<<stack.isfull()<<std::endl;
	return 0;
}