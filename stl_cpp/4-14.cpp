#include <iostream>
#include <string>
using namespace std;

template<typename T>
class ObjectInfo{
	T data;
public:
	ObjectInfo(const T& d): data(d){}
	void Print(){
		cout<<"type : "<<typeid(data).name()<<endl;
		cout<<"size : "<<sizeof(data)<<endl;
		cout<<"value: "<<data<<endl;
		cout<<endl;
	}
};

template<>
class ObjectInfo<string>{
	string data;
public:
	ObjectInfo(const string& d):data(d){}
	void Print(){
		cout<<"type : "<<"string"<<endl;
		cout<<"size : "<<data.size()<<endl;
		cout<<"value: "<<data<<endl;
		cout<<endl;
	}
};

int main(){
	ObjectInfo<int> d1(10);
	d1.Print();

	ObjectInfo<double> d2(5.5);
	d2.Print();

	ObjectInfo<string> d3("Hello!");
	d3.Print();

	return 0;
}
