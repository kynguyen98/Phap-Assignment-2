#include <iostream>
class rectangle{
	private:
	double w,h;
	public:
	rectangle(double ,double);
	double getw();
	double geth();
	double perimeter();
	double area();
};
rectangle::rectangle(double x,double y){
	w=x;
	h=y;
}
double rectangle::getw(){
	return w;
}
double rectangle::geth(){
	return h;
}
double rectangle::area(){
	return w*h;
}
double rectangle::perimeter(){
	return 2*(w+h);
}
int main() {
	rectangle rec1(23,20);
	rectangle rec2(40,50);
	std::cout << "Hello Easy C++ project!" << std::endl;
	std::cout<<"Area of rec1 is "<<rec1.area()<<std::endl;
	std::cout<<"Area of rec2 is "<<rec2.area()<<std::endl;
	std::cout<<"Oerimeter of rec1 is "<<rec1.perimeter()<<std::endl; 
	std::cout<<"Oerimeter of rec2 is "<<rec2.perimeter()<<std::endl; 
	return 0;
}