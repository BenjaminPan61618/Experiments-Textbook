#include <iostream>
using namespace std;
class Point{
	private:
	int x;
	int y;
	public:
	Point(int tx,int ty){
		x=tx;
		y=ty;
		cout<<"我是双参数构造函数，我被执行了"<<endl;
	}
	void printPoint(){
		cout<<"x="<<x<<","<<"y="<<y<<endl;
	}
	friend void getPointX(Point &);
};
void getPointX(Point &p){
	cout<<"我是 Point 的友元函数 X="<<p.x<<endl;
} 
int main(){
	Point a(4,5);
	a.printPoint();
	getPointX(a);
	return 0;
}

/* 
 * 运行结果:
 * 我是双参数构造函数，我被执行了
 * x=4,y=5
 * 我是 Point 的友元函数 X=4
*/

/*
 * 分析：
 * 程序定义了一个叫 Point 的类
 * 里面定义了私有成员变量x, y
 * 定义了一个构造函数 Point(int tx, int ty)
 *  传入的参数tx, ty分别赋予x和y
 *  然后打印出' 我是双参数构造函数，我被执行了"这句话
 *  另外还定义了一个私有数据成员函数 printPoint()
 *  将x和y的数据输出
 *  还有一个Point 类的友元函数
 *  用于打印“我是 Point 的友元函数 X=(x 的值)"这句话
*/

