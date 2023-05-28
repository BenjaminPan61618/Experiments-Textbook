#include <iostream>
using namespace std;
class Base{public:
void setx(int i)
{x=i;}
int getx()
{return x;}
public: 
int x;
};
class Derived: protected Base{
public:
void sety(int i)
{y=i;}
int gety()
{return y;}
void show()
{cout<<"Base::x="<<x<<endl;}
public:
 int y;
};
int main()
{
	Derived bb;
	bb.setx(25);
	bb.sety(30);
	bb.show();
	cout<<"Base::x="<<bb.x<<endl;
	cout<<"Derived::y="<<bb.y<<endl;
	cout<<"Base::x="<<bb.getx()<<endl;
	cout<<"Derived::y="<<bb.gety()<<endl;
	return 0;
}   

/* (1) 运行结果:
 * Base::x=25
 * Base::x=25
 * Derived::y=30
 * Base::x=25
 * Derived::y=30
 * 
 * 分析：
 * 这个程序定义了两个类：Base 和 Derived. 其中，Derived 类继承了 Base 类，并添加了一个新的成员变量y和一个新的成员函数sety()和gety().
 * 在main()函数中，我们创建了 Derived 类的一个对象 bb，并使用setx()和sety()函数分别设置了x和y的值。
 * 然后调用了show()函数，它输出了Base::x的值。接下来，程序分别输出了 bb 对象的x和y的值，以及使用getx()和gety()函数获取的x和y的值。
 * 因为Derived类继承了Base类，所以它可以访问Base类的成员变量x。
 * 在show()函数中，程序输出了Base::x的值。
 * 在main()函数中，程序分别输出了bb对象的x和y的值，以及使用getx()和gety()函数获取的x和y的值。
 * 由于bb对象是Derived类的一个对象，所以它可以访问Base类的成员变量x和自己的成员变量y。
 * 因此，输出的结果中Base::x的值和bb.x的值相同，而Derived::y的值和bb.y的值相同。
 */

//（2）在gcc/g++（Dev-C++, Geany, Cxxdroid等) 编译会提示“10.3.7-1.cpp:29:30: error: ‘int Base::x’ is private within this context” (在上下文语境中，Base 对象中的 x 是私有数据成员)
// 原因： 设定为私有(private)属性后，外界无法访问 Base 内部的私有成员 x.

//（3）在gcc/g++（Dev-C++, Geany, Cxxdroid等) 编译会提示"10.3.7-1.cpp:29:30: error: ‘int Base::x’ is protected within this context“ (在上下文语境中，Base 对象中的 x 是受保护成员)
// 原因： 设定为受保护(protected)属性后，外界无法访问 Base 内部的私有成员 x.

// (4) 在gcc/g++（Dev-C++, Geany, Cxxdroid等) 编译会提示"10.3.7-1.cpp:25:16: error: ‘void Base::setx(int)’ is inaccessible within this context"(setx 不可访问)
// 													 "10.3.7-1.cpp:28:30: error: ‘int Base::x’ is inaccessible within this context"(x 不可访问)
// 													 "10.3.7-1.cpp:25:16: error: ‘Base’ is not an accessible base of ‘Derived’ "（Base 不是 Derived 可以访问的一个基类）
// 原因： 将 Base 中的数据私有继承到 Derived 后转为私有成员，所以 main 函数无法访问 setx 和x.

// (5) 在gcc/g++（Dev-C++, Geany, Cxxdroid等) 编译会提示"10.3.7-1.cpp:25:16: error: ‘void Base::setx(int)’ is inaccessible within this context" (setx 不可访问)
//													 "10.3.7-1.cpp:25:16: error: ‘Base’ is not an accessible base of ‘Derived’"（Base 不是 Derived 可以访问的一个基类）
//													 "10.3.7-1.cpp:28:30: error: ‘int Base::x’ is inaccessible within this context(x 不可访问)
// 原因： 将 Base 中的数据保护继承到 Derived 后转为受保护成员，   main 函数无法访问 setx 和x.
