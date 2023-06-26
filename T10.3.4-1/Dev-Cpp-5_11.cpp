#include <iostream>
using namespace std;
class Point{
private:
	int x;
	int y;
public:
	Point(int tx,int ty)
	{
		x=tx;
		y=ty;
		cout<<"我是构造函数，我被执行了"<<endl;
	}
	void printPoint(){
		cout<<"x="<<x<<","<<"y="<<y<<endl;
	}
	~Point(){
		cout<<"我是析构函数，我被执行了"<<endl;
	}
};

int main(){
	Point a(4,5);
	a.printPoint();
	return 0;
}



/* 
 * 运行结果:
 * 我是构造函数，我被执行了
 * x=4,y=5
 * 我是析构函数，我被执行了
*/

/*
 * 分析：
 * 程序定义了一个叫 Point 的类
 * 里面定义了私有成员变量x, y
 *  以及一个构造函数 Point(int tx, int ty)
 *  传入的参数tx, ty分别赋予x和y
 *  然后打印出' 我是构造函数，我被执行了"这句话
 *  另外还定义了一个私有数据成员函数 printPoint()
 *  将x和y的数据输出
 *  还有一个析构函数
 *   用于打印“是析构函数，我被执行了"这句话
 *  main 函数调用构造函数 Point a(4,5);
 *  将私有成员函数x和y赋予值4和5
 *  然后利用 printPoint() 输出x和y的值
 *  执行完成后，程序自动运行析构函数
 *  打印”是析构函数，我被执行了“
 */

