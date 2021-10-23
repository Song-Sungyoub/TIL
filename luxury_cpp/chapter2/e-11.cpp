#include <iostream>

int main(){
	int n=0;
	int sum = 0;
	std::cout<<"끝 수를 입력하세요>>";
	std::cin>>n;
	for(int k=1;k<=n;k++){
		sum += k;
	}
	std::cout<<"1에서 "<<n<<"까지의 합은 "<<sum<<"입니다"<<std::endl;
}