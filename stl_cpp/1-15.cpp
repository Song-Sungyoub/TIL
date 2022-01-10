#include <iostream>
using namespace std;

struct FuncObject{
public:
	void operator() (int arg) const{
		cout <<"Integer : "<<arg<<endl;
	}
	void operator()(int arg1, int arg2) const{
		cout<<"Integer : "<<arg1<<", "<<arg2<<endl;
	}
	void operator()(int arg1, int arg2, int arg3) const{
		cout<<"Integer : "<<arg1<<", "<<arg2<<", "<<arg3<<endl;
	}
};

int main(){
	FuncObject print;
	print(10);
	print(10, 20);
	print(10, 20, 30);
	cout <<endl;
}
