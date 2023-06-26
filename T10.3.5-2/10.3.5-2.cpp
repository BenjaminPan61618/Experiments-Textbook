#include<iostream>
#include<string.h>
using namespace std;
void main()
{
	system("chcp 65001");
	int i=0,base,n,j,num[200];
	cout<<"输入一个整数：";
	cin>>n;
	cout<<"输入基数：";
	cin>>base;
	do{
		i++;
		num[i]=n%base;
		n=n/base;
	}while(n!=0);
	cout<<"结果:";
	for(j=i;j>=1;j--)
	cout<<num[j];
	cout<<endl;
	}
	
/* 运行结果：
 * 输入一个整数：45
 * 输入基数：8
 * 结果:55 
 * 程序功能：这个程序的作用是将输入的十进制数转换为任意进制数
 * 
 * 程序首先要求用户输入一个整数和一个基数。
 * 然后，它使用do-while循环来计算每个数字，并将它们存储在一个数组中。在每次循环中，程序将输入的整数除以基数，将余数存储在数组中，然后将输入的整数更新为商。
 * 当输入的整数为0时，循环结束。
 * 接下来，程序使用另一个循环来反向输出数组中的数字以获得正确的结果。具体来说，程序从数组的最后一个元素开始，逐个输出每个元素，直到输出第一个元素为止。 
 */