#include <iostream>
using namespace std;
long fib(int g)
{
	switch(g)
	{
		case 0:return 0;
		case 1:
		case 2: return 1;
	}
	return (fib(g-1)+fib(g-2));
}

void main()
{
	long k;
	k=fib(7);
	cout<<"k="<<k<<endl;
}


/* 
 * 函数fib()从用户的输入中获取一个整数g，并返回斐波那契序列中的第g个数。
 * 如果g为0，则函数返回0。如果g是1或2，则函数返回1。
 * 否则，函数返回斐波那契序列中第（g-1）个和第（g-2）个数字的和。
 * 在主函数中，变量k使用fib()函数被赋予斐波那契序列中第7个数字的值。
 * 最后，k的值被打印出来。
 */
