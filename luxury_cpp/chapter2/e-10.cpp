#include <iostream>
#include <string>

int main(){
	std::cout<<"문자열 입력";
	std::string str;
	std::cin>>str;
	for(int i=1;i<=str.length();i++){
		std::cout<<str.substr(0, i)<<std::endl;
	}
}