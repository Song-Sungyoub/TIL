#include <iostream>
#include <string>

using namespace std;

int main(){
	string txt;
	cout<<"영문 텍스트를 입력하세요. 히스토그램을 그립니다."<<endl<<"텍스트의 끝은 ; 입니다. 10000개까지 가능합니다."<<endl;
	
	getline(cin, txt, ';');

	int alpha[26] = {0,};

	for(int i=0;i<txt.length();i++){
		if(isalpha(txt[i]))
			alpha[tolower(txt[i])-'a']++;
	}
	
	for(int i=0;i<sizeof(alpha)/sizeof(int);i++){
		cout<<(char)('a'+i)<<" ("<<alpha[i]<<")\t: ";
		for(int j=0;j<alpha[i];j++){
			cout<<"*";
		}
		cout<<endl;
	}

}