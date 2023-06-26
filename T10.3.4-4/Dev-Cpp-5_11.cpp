#include <iostream>
#include <cmath>
class Triangle {
private:
    double a, b, c; // �����ε������߳�
    double area; // �����ε����
public:
    // Ĭ�Ϲ��캯��������һ���߳�Ϊ1�ĵȱ�������
    Triangle() : a(1), b(1), c(1) {
        if (isTriangle()) {
            calculateArea();
        }
    }
    // ���캯�������������ε������߳�
    Triangle(double a, double b, double c) : a(a), b(b), c(c) {
        if (isTriangle()) {
            calculateArea();
        }
    }
    // �ж��������ܷ񹹳�������
    bool isTriangle() {
        return a + b > c && a + c > b && b + c > a;
    }
    // ���������ε����
    void calculateArea() {
        double p = (a + b + c) / 2;
        area = sqrt(p * (p - a) * (p - b) * (p - c));
    }
    // ��������ε����
    void printArea() {
        std::cout << "The area of the triangle is " << area << std::endl;
    }
    // ��������ε�����
    void printType() {
        if (a == b && b == c) {
            std::cout << "The triangle is an equilateral triangle" << std::endl;
        } else if (a == b || a == c || b == c) {
            std::cout << "The triangle is an isosceles triangle" << std::endl;
        } else {
            std::cout << "The triangle is a scalene triangle" << std::endl;
        }
    }
};

int main(){
	int a,b,c;  
	std::cin>>a>>b>>c;
   Triangle triangle(a,b,c);
    if(triangle.isTriangle()){
   triangle.calculateArea();
   triangle.printArea();
   triangle.printType();
}
  else{
	  std::cout<<"Guess what? It's not a triangle!";
}
}

