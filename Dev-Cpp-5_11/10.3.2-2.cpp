#include <iostream>
using namespace std;
void main()
{
	int i;
	for(i=1;i<=5;i++)
	{
		if(i%2)
		cout<<'*'; //i为奇数输出一个*
		else
		continue; //i为偶数输出一个*
		cout<<'#'; //每次循环（若不被跳过）输出一个#
	}
	cout<<"$ \n";
}

/* 运行结果：
 * *#*#*#$ 
 * 
 * 分析：
 * 通过for循环实现i的自增，通过判断i%2d是否为0从而判断i能否被2整除（是否为偶数）
 * 若i为奇数输出一个*和一个#，反之跳过本次循环
 * 直到for语句判断i=5时执行最后一次，输出$ 一个换行，最后退出程序
 */

