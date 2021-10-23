#include <iostream>
#include <string>

using namespace std;

int main(){
	string q;
	while(true){
		cout<<"? ";
		getline(cin, q);

		int a = atoi(q.substr(0,q.find(' ')+1).c_str());
		q = q.substr(q.find(' ')+1, q.length());
		char b = q.substr(0,q.find(' ')+1)[0];
		q = q.substr(q.find(' ')+1, q.length());
		int c = atoi(q.c_str());
		
		cout<<a<<' '<<b<<' '<<c<<" = ";
		if(b=='+')
			cout<<a+c<<endl;
		else if(b=='-')
			cout<<a-c<<endl;
		else if(b=='*')
			cout<<a*c<<endl;
		else if(b=='/')
			cout<<a/c<<endl;
		else
			cout<<a%c<<endl;
	}
}