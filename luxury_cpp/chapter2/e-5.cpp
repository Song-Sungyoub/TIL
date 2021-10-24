#include <iostream>
using namespace std;

int main(){
	cout<<"문자들 입ㄱ하(100 미)"<<endl;

	char str[100];
	cin.getline(str, 100);
	int cnt=0;
	for(int i = 0;i<100;i++){
		if(str[i]=='x')
			cnt++;
	}
	cout<<"x is"<<cnt<<endl;
}
