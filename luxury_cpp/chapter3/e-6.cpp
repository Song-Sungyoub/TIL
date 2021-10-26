#include <iostream>
#include <string>
using namespace std;

class Integer{
	int num;
public:
	Integer(int a);
	Integer(string a);
	int get();
	int set(int a);
	int isEven();
};

Integer::Integer(int a){
	num = a;
}
Integer::Integer(string a){
	num = atoi(a.c_str());
}
int Integer::get(){
	return num;
}
int Integer::set(int a){
	num = a;
}
int Integer::isEven(){
	return num%2==0?true:false;
}


int main(){
	Integer n(30);
	cout<<n.get()<<" ";
	n.set(50);
	cout<<n.get()<<" ";

	Integer m("300");
	cout<<m.get()<<' ';
	cout<<m.isEven();
}