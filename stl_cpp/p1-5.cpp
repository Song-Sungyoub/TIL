#include <iostream>
#include <cstring>
using namespace std;

class String{
	char *buf;
public:
	String(const char* sz){
		buf = new char[strlen(sz) +1];
	}
	~String(){
		delete [] buf;
	}
	const String& operator=(const String& arg){
		delete [] buf;
		buf = new char(strlen(arg.buf)+1);
		strcpy(buf, arg.buf);

		return *this;
	}
};

int main(){
	const char* sz = "Hello!";
	String s("Hi~!");
	s = sz;
}
