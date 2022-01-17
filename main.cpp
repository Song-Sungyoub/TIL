#include <iostream>
#include <cmath>
using namespace std;

int main(){
	float a,b,c;
	float x;
	cin>>a>>b>>c;
	x = a/sqrt(pow(b,2)+pow(c,2));
	cout<<floor(x*b)<<' '<<floor(x*c);
	return 0;
}