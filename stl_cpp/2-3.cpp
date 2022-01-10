#include <iostream>
using namespace std;

void Print(){
	cout<<"static function Print()"<<endl;
}

class Point{
public:
	void Print(){
		cout<<"member function Print()"<<endl;
	}
};

int main(){
	Point pt;
	Point *p = &pt;

	Print();
	pt.Print();
	p->Print();
}
