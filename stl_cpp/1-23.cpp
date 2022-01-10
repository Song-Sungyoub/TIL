#include <iostream>
using namespace std;
class A{
	
};

class B{
public:
	B(){cout<<"B() creator"<<endl;}
	B(A& _a){cout<<"B(A _a) creator"<<endl;}
	B(int n){cout<<"B(int n) creator"<<endl;}
	B(double d){cout<<"B(double d) creator"<<endl;}
};

int main(){
	A a;
	int n=10;
	double d = 5.5;
	B b;
	b = a;
	b = n;
	b = d;

	return 0;
}
