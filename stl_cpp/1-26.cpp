#include <iostream>
using namespace std;

class A{

};

class B{
public:
	operator A(){
		cout<<"operator A() called"<<endl;
		return A();
	}
	operator int(){
		cout<<"operator int() called"<<endl;
		return 10;
	}
	oeprator double(){
		cout<<"operator doble() called"<<endl;
		return 5.5;
	}
};

int main(){
	A a;
	int n;
	double d;

	B b;
	a = b;
	n = b;
	d = b;

	cout<<endl;
	a = b.operator A();
	n = b.operator int();
	d = b.operator double();

	return 0;
}
