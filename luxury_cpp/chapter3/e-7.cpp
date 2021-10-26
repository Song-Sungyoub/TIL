#include <iostream>
using namespace std;

class Oval{
	int width;
	int height;
public:
	Oval();
	Oval(int a, int b);
	void set(int a, int b);
	void show();
	int getWidth();
	int getHeight();
	~Oval();
};

Oval::Oval(){

}
Oval::Oval(int a, int b){
	set(a,b);
}

void Oval::set(int a, int b){
	width = a;
	height = b;
}

void Oval::show(){
	cout<<"width = "<<width<<", height = "<<height<<endl;
}

int Oval::getWidth(){
	return width;
}

int Oval::getHeight(){
	return height;
}

Oval::~Oval(){
	cout<<"Oval 소멸 : width = "<<width<<", height = "<<height<<endl;
}

int main(){
	Oval a, b(3,4);
	a.set(10,20);
	a.show();
	cout<<b.getWidth()<<","<<b.getHeight()<<endl;
}