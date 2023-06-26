#include <iostream>
using namespace std;
class Point{
private:
	int x;
	int y;
	static int countPoint;
public:
	Point(int tx){
		x=tx;
		y=0;
		++countPoint;
		cout<<"我是单参数构造函数，我被执行了"<<endl;
	}
	Point(int tx, int ty){
		x=tx;
		y=ty;
		++countPoint;
		cout<<"我是双参数构造函数，我被执行了"<<endl;
	}
	void printPoint(){
		cout<<"x="<<x<<","<<"y="<<y<<endl;
		cout<<"目前一共有"<<countPoint<<"个Point 对象"<<endl;
		}
		~Point(){
			--countPoint;
			cout<<"我是析构函数，我被执行了"<<endl;
		}
	};
	int Point::countPoint =0;
	int main(){
		Point a(4,5);
		a.printPoint();
		Point b(5);
		b.printPoint();
		return 0;
	}
	
/* 
 * 运行结果:
 * 我是双参数构造函数，我被执行了
 * x=4,y=5
 * 目前一共有1个Point 对象
 * 我是单参数构造函数，我被执行了
 * x=5,y=0
 * 目前一共有2个Point 对象
 * 我是析构函数，我被执行了
 * 我是析构函数，我被执行了
*/

/*
 * 分析：
 * 程序定义了一个叫 Point 的类
 * 里面定义了私有成员变量x, y, countPoint
 *  以及两个构造函数 Point(int tx) 和 Point(int tx, int ty)
 *  前者从形参传入的参数tx,被赋予x
 *  后者从形参传入的参数tx, ty分别赋予x和y
 *  二者均在赋值后令countPoint计数自增
 *  然后打印出' 我是单(双)参数构造函数，我被执行了"这句话
 *  另外还定义了一个私有数据成员函数 printPoint()
 *  将x和y的数据输出，同时输出"目前一共有(countPoint)个Point 对象"
 *  还有一个析构函数
 *   打印“是析构函数，我被执行了"这句话，同时将countPoint计数自减
 *  main 函数先调用构造函数 Point a(4,5);
 *  将私有成员函数x和y赋予值4和5
 *  然后利用printPoint()输出x, y和countPoint的值
 *  main 函数接着又调用构造函数 Point a(5);
 *  将私有成员函数x赋予值5
 *  然后利用printPoint()输出x和countPoint的值
 *  执行完成后，程序自动运行析构函数
 *  此时有两个类，第一次执行析构函数后, countPoint自减
 *  打印”是析构函数，我被执行了“
 *  此时剩下一个类，第二次执行析构函数后, countPoint自减
 *  打印”是析构函数，我被执行了“
 */

