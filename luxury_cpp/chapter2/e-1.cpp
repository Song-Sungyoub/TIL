#include <iostream>

int main(){
	int cnt=1;
	for(int n=0; n<10;n++){
		for(int m=0;m<10;m++){
			std::cout<<cnt<<'\t';
			cnt++;
		}
		std::cout<<std::endl;
	}
}
