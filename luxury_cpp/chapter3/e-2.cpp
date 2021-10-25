#include <iostream>
#include <string>
using namespace std;

class Date{
	int date[3];
public:
	Date(string d);
	Date(int a, int b, int c);
	int getYear(){return date[0];};
	int getMonth(){return date[1];};
	int getDay(){return date[2];};
	void show();
};

Date::Date(string d){
	for(int i=0;i<3;i++){
		date[i] = atoi(d.substr(0,d.find('/')).c_str());
		d = d.substr(d.find('/'), d.length());
	}
}

Date::Date(int a, int b, int c){
	date[0] = a;
	date[1] = b;
	date[2] = c;
}

void Date::show(){
	cout<<date[0]<<"년"<<date[1]<<"월"<<date[2]<<"일"<<endl;
}

int main(){
	Date birth(2014, 3, 20);
	Date independenceDay("1945/8/15");
	independenceDay.show();
	cout << birth.getYear() << "," << birth.getMonth() << ',' << birth.getDay() << endl;
}