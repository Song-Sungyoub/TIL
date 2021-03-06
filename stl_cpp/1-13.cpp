#include <iostream>
using namespace std;

class Point{
	int x;
	int y;
public:
	Point(int _x=0, int _y=0):x(_x), y(_y){}
	void Print() const{cout<<x<<", "<<y<<endl;}
	friend const Point operator-(const Point& argL, const Point& argR);
};
const Point operator-(const Point& argL, const Point & argR){
	return Point(argL.x - argR.x, argL.y - argR.y);
}

int main(){
	Point p1(2,3), p2(5,5);
	Point p3;

	p3 = p1 - p2;

	p3.Print();

	return 0;
}
