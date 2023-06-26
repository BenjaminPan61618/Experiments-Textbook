#include <iostream>
#include <cmath>
class Triangle {
private:
    double a, b, c; // 三角形的三条边长
    double area; // 三角形的面积
public:
    // 默认构造函数，构造一个边长为1的等边三角形
    Triangle() : a(1), b(1), c(1) {
        if (isTriangle()) {
            calculateArea();
        }
    }
    // 构造函数，传入三角形的三条边长
    Triangle(double a, double b, double c) : a(a), b(b), c(c) {
        if (isTriangle()) {
            calculateArea();
        }
    }
    // 判断三条边能否构成三角形
    bool isTriangle() {
        return a + b > c && a + c > b && b + c > a;
    }
    // 计算三角形的面积
    void calculateArea() {
        double p = (a + b + c) / 2;
        area = sqrt(p * (p - a) * (p - b) * (p - c));
    }
    // 输出三角形的面积
    void printArea() {
        std::cout << "The area of the triangle is " << area << std::endl;
    }
    // 输出三角形的类型
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

