#include <iostream>
using namespace std;
class Point{
	private:
	int x;
	int y;
	public:
	 Point(){x=0;y=0;};
	 Point(int px,int py){

		x=px;
		y=py;
		};
	 Point(const Point &p){x=p.x;y=p.y;};
	bool operator==(Point &other) {
    return x == other.x && y == other.y;
	}
	friend Point operator+(Point &, Point &);
	friend Point operator-(Point &, Point &);
	int GetX(){return x;};
	int GetY(){return y;};
	void Display(){cout<<"X="<<x<<", Y="<<y<<endl;} 
	};
	
    Point operator+ ( Point &p1,  Point &p2)
{
    return  Point(p1.x+p2.x, p1.y+p2.y);
}
Point operator- (Point &p1, Point &p2)
{
    Point p;
    p.x = p1.x-p2.x;
    p.y = p1.y-p2.y;
    return p;
} 
 
int main(){
	int x,y;
	cin>>x>>y;
	Point p1(x,y);
	Point p2(p1);
	p1.Display();
	p2.Display();
	if (p1==p2)
	cout<<"p1==p2"<<endl;
	Point p3=p1+p2;
	Point p4=p1-p2;
	p3.Display();
	p4.Display();
	return 0;}

