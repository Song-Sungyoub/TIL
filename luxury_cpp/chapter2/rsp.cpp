#include <iostream>
#include <string>

int main(){
	std::string satto;
	std::string arang;
	std::cout<<"가위바위보 게임을 합니다. 가위, 바위, 보 중에서 입력하세요."<<std::endl;
	std::cout<< "사또>>";
	getline(std::cin, satto);
	std::cout<< "아랑>>";
	getline(std::cin, arang);
	if(arang==satto){
		std::cout<<"비겼습니다."<<std::endl;
	}else{
		if(arang=="바위"){
			if(satto=="가위")
				std::cout<<"아랑이 이겼습니다."<<std::endl;
			else
				std::cout<<"사또가 이겼습니다."<<std::endl;
		}
		else if(arang=="가위"){
			if(satto=="바위")
				std::cout<<"사또가 이겼습니다"<<std::endl;
			else
				std::cout<<"아랑이 이겼습니다"<<std::endl;
		}else{
			
		}
	}
}
