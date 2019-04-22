#include <iostream>
class myutil{
	public:
	/*//normal method
	static int factorial (int n){
		int fact=1;
		int *ptr=nullptr;
		for (int i=1;i<=n;i++){
			fact=fact*i;
		}
		return static_cast<long>(fact);
	}*/
	/*//recursion method
	static int factorial(int n){
		if (n==0) return 1;
		else if (n<=-1) return -1;
		else return static_cast<long>(n*(factorial(n-1)));
	}
	*/
static int factorial(int *n){
	int fact;
	fact=1;
	for (int i=1;i<=*n;i++){
		if (*n==0) return 1;
		else if (*n<=-1) return -1;
		else fact=fact*i;
	}
	return static_cast<long>(fact);
}

	static bool prime(int *n){
		if (*n==0||*n<0) 
		{
			std::cout<<*n<<" is not a prime number"<<std::endl;
			return false;
		}
		else if (*n==1) {
			std::cout<<*n<<" is prime"<<std::endl;
			return true;
		}
		else {
			for (int i=2;i<*n;i++){
				if (*n%i==0) {
					std::cout<<*n<<" is not prime"<<std::endl;
					return false;
				} 
				else {
					std::cout<<*n<<" is prime"<<std::endl;
					return true;
				}
			}
		}

	} 
	static bool istriangle(double a,double b,double c){
		bool istriangle=true;
		if (a<(b+c)&&b<(a+c)&&c<(b+a)) {
			std::cout<<"Is triangle"<<std::endl;
			return istriangle ;
			}
		else {
			std::cout<<"Is not triangle"<<std::endl;
						istriangle=false;
			return istriangle;
		}
	}
};
int main(int argc, char *argv[]) {
	int n;
	std::cout <<"Hello Easy C++ project!" << std::endl;
	std::cout<<"Enter the number: ";std::cin>>n;std::cout<<std::endl;
	std::cout<<"Here is the factorial "<<myutil::factorial(&n)<<"\n"<<std::endl;
	myutil::prime(&n);
	myutil::istriangle(7,10,5);
	return 0;
}
