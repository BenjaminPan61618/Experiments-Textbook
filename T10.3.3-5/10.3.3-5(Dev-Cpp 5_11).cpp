#include <iostream>
#include <string>
using namespace std;
void HtoD (string str)
{
//在这里编写函数代码完成转换并输出结果
int dec = stoi(str, nullptr, 16);
cout<<"转换结果为:"<<dec<<endl;
}

void main()
{
	string hs;
	cout<<"请输入一个十六进制数:";
	cin>>hs;
	HtoD(hs); //调用函数现实转换的结果;
}

