#include <iostream>
#include <string>
using namespace std;

template<typename T>
class Array{
	T *buf;
	int size;
	int capacity;
public:
	explicit Array(int cap=100):buf(0), size(0), capacity(cap){
		buf = new T[capacity];
	}
	~Array(){delete [] buf;}
	void Add(T data){
		buf[size++] = data;
	}
	T operator[] (int idx) const{
		return buf[idx];
	}
	int GetSize() const{
		return size;
	}
};

int main(){
	Array<int> iarr;
	iarr.Add(10);
	iarr.Add(20);
	iarr.Add(30);

	for(int i=0;i<iarr.GetSize(); ++i){
		cout<<iarr[i]<<" ";
	}
	cout<<endl;
}
