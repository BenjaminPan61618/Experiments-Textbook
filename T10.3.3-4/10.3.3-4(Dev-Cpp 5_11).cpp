#include <iostream>
#include <iomanip>
using namespace std;
void subp()
{
		static int x=0, y=0; /*问题*/
		int a,b;
		
		a=x - y;
		b=x+y;
		x+=5;
		y+=8;
		cout<<"a="<<a<<",b="<<b<<endl;
		cout<<"x="<<x<<",y="<<y<<endl;
	}
	
	int x,y;
	void main()
	{
		int a=9, b=3;
		x=a - b;
		y=a+b;
		subp();
		subp();
		cout<<"a="<<a<<",b="<<b<<endl;
		cout<<"x="<<x<<",y="<<y<<endl;
	}

/* (1)
 * 运行结果:
 * a=0,b=0
 * x=5,y=8
 * a=0,b=0
 * x=5,y=8
 * a=9,b=3
 * x=6,y=12
 * 
 * 分析：
 * 程序定义了一个函数subp()，并将其中的两个变量x和y初始化为0
 * 然后程序对a、b、x、y进行计算并将其值打印出来
 * main 函数将其中的变量a和b分别初始化为9和3，利用a和b计算x和y后，调用subp函数进行计算
 * 最终输出a、b、x、y
 */

/* (2)
 * 会发生变化。运行结果：
 * a=0,b=0
 * x=5,y=8
 * a=-3,b=13
 * x=10,y=16
 * a=9,b=3
 * x=6,y=12
 * 分析：x、y被定义为静态变量
 * subp函数调用时，它们的值将保持不变。
 */

