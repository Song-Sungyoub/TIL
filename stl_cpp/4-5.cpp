#include <iostream>
using namespace std;

template<typename T1, typename T2>
void Print(T1 a, T2 b){
	cout<<a<<", "<<b<<endl;
}
int main(){
	Print(10, 20);
	Print(10, 0.5);
	Print(100, "Hello");

	return 0;
}
