#include <iostream>

using namespace std;

class SelectableRandom{


public:
	SelectableRandom();
	int odd();
	int even();
	int oddInRange();
	int evenInRange();
};

SelectableRandom::SelectableRandom(){
	srand((unsigned)time(0));
}

int SelectableRandom::odd(){

}

int SelectableRandom::even(){

}

int SelectableRandom
 

int main(){
	SelectableRandom r;
	cout<<"-- 0에서 "<<RAND_MAX<<"까지의 랜덤 정수 10 개 --"<<endl;
	for(int i = 0;i<10;i++){
		int n = r.odd();
		cout<<n<<' ';
	}
	cout <<endl<<endl;
	for(int i=0;i<10;i++){
		int n = r.evenInRange(2, 10);
		cout<< n << ' ';
	}
	cout<<endl;
}