#include <iostream>
using namespace std;

int main(){
	cout<<"5 개의 실수를 입력하라>>";
	double num[5];
	cin>>num[0]>>num[1]>>num[2]>>num[3]>>num[4];
	double tmp = num[0];
	for(int i=0;i<5;i++){
		if(tmp<num[i])
			tmp=num[i];
	}
	cout<<"제일 큰 수 = "<<tmp<<endl;
}
