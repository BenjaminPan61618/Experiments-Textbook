#include <iostream>
#include <iomanip>
using namespace std;

int main(int argc, char* argv[])
{
	const float PI=3.14159;
	float radius, circumference, square;
	cout<<"Input the radius:";
	cin>>radius;
	circumference=2 * PI * radius;
	square = PI * radius * radius;
	cout<<"Circumference="<<setiosflags(ios::fixed)<<setprecision(2)<<circumference<<endl;
	cout<<"Square="<<square<<endl;
	return 0;
}
