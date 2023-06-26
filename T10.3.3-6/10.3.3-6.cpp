#include <iostream>
using namespace std;

void max(int a, int b){
	cout << "max(" << a << "," << b << ")=" << (a >= b ? a : b) << endl; 
	}
	
void max(int a, int b, int c){
	int temp;
	if (a >= b) 
	temp = a;
	else 
	temp = b;
	cout << "max(" << a << "," << b << "," << c << ")=" << (temp >= c ? temp : c) << endl;
	}

void max(double a, double b){
	cout << "max(" << a << "," << b << ")=" << (a >= b ? a : b) << endl; 
	}
void max(double a, double b, double c){
	double temp;
	if (a >= b) 
	temp = a;
	else 
	temp = b;
	cout << "max(" << a << "," << b << "," << c<<")=" << (temp >= c ? temp : c) << endl;}

int main()
{
	int a,b,c;
	double x,y,z;
	
	cout<<"请输入3个整数:";
	cin>>a>>b>>c;
	max (a,b);
	max (a,c);
	max (b,c);
	max(a,b,c);
	
	cout<<"请输入3个实数:";
	cin>>x>>y>>z;
	max(x,y);
	max(x,z);
	max(y,z);
	max(x,y,z);
	
	return 0;
}
