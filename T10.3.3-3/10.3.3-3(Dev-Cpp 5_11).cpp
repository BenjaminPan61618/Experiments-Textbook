#include <iostream>
using namespace std;
int k=1;

void main()
{
	int i=4;
	int fun(int);
	fun (i);
	cout<<"(1)i="<<i<<",k="<<k<<endl;
}

int fun(int m)
{
	m+=k;
	k+=m;
	{
		char k='B';
		cout<<"(2)m="<<m<<",k="<<k<<endl;
	}
	cout<<"(3)m="<<m<<",k="<<k<<endl;
	return 0;
}

/* （1）
 * 修改后的程序如下：
 * #include <iostream>
 * using namespace std;
 * int k=1;
 * int fun(int k);
 *
 * int main();
 * {
 * 	int i=4;
 * 	fun (i);
 * 	cout<<"(1)i="<<i<<",k="<<k<<endl;
 * }

 * int fun(int m)
 * {
 * 	m+=k;
 * 	k+=m;
 * 	{
 * 		char k='B';
 * 		cout<<"(2)m="<<m<<",k="<<k<<endl;
 * 	}
 * 	cout<<"(3)m="<<m<<",k="<<k<<endl;
 * 	return 0;
 * }
 */



/* （2）
 * 题目代码中声明了一个全局变量k,并且为其赋值为1
 * 然后定义了一个函数fun, 该函数中声明了一个char类型的局部变量k,并赋值为'B'
 * 此处的局部变量k会在函数运行过程中遮蔽全局变量k
 * 程序的main函数声明了一个整数变量i，并为其赋值4。
 * 然后程序执行了一些运算得到了如下的输出：
 * (2)m=5,k=B //此处的k为局部变量char k
 * (3)m=5,k=6 //此处的k为全局变量int k
 * (1)i=4,k=6 //此处的k为全局变量int k
 */

