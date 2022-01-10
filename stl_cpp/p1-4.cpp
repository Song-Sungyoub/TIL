#include <iostream>
#include <cstring>
using namespace std;

class String{
	char buf[100];
public:
	String(const char* sz){
		strcpy(buf, sz);
	}
	operator const char*() const{
		return buf;
	}
};

int main(){
	String s("Hello!");
	const char* sz = s;
	cout<<sz<<endl;
}
