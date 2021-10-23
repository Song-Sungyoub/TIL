#include <iostream>
#include <string>

int main(){
	std::string yes;
	while(true){
		std::cout<<"종료하고싶으면 yes를 입력하세요>>";
		getline(std::cin, yes);
		if(yes=="yes")
			break;		
	}
	std::cout<<"종료합니다."<<std::endl;
}