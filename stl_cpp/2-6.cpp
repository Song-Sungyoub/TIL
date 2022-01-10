#include <iostream>
using namespace std;

void Client();

////////Server//////////

void PrintHello(){
	cout<<"Hello!"<<endl;
	Client();
}

///////Client//////////
void Client(){
	cout<<"I am client"<<endl;
}

int main(){
	PrintHello();

	return 0;
}
