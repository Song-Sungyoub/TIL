#include <iostream>
using namespace std;

class Equal{
public:
	bool operator()(int a, int b){
		return a==b;
	}
};

int main(){
	Equal cmp;
	if(cmp(10,20)){
		cout<<"Same!"<<endl;
	}
	else{
		cout<<"Different!"<<endl;
	}
}
