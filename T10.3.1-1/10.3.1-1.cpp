// 原题干代码

 #include <iostream>
using namespace std;
void  main()
{
int a,b;
cout<<"请输入两个数:";
cin>>a>>b;
cout<<a<<"+"<<b<<"="<<a+b<<endl;
cout<<a<<"-"<<b<<"="<<a-b<<endl;
cout<<a<<"*"<<b<<"="<<a*b<<endl;
cout<<a<<"/"<<b<<"="<<a/b<<endl;
}

//修改后的代码
/*
 #include <iostream>
using namespace std;
void  main()
{
double a,b;
cout<<"请输入两个数:";
cin>>a>>b;
cout<<a<<"+"<<b<<"="<<a+b<<endl;
cout<<a<<"-"<<b<<"="<<a-b<<endl;
cout<<a<<"*"<<b<<"="<<a*b<<endl;
cout<<a<<"/"<<b<<"="<<a/b<<endl;
}
*/

/*(1)
 * 输入 7 5 
 * 运行结果： 
 * 请输入两个数:7 5
 * 7+5=12
 * 7-5=2
 * 7*5=35
 * 7/5=1
 * 
 * 分析：输入两个整数后，cin将这两个整数分别赋予a和b进行四则运算。
 * 
 * (2)
 * 输入 4 2.3
 * 运行结果:
 * 请输入两个数:4 2.3
 * 4+2=6
 * 4-2=2
 * 4*2=8
 * 4/2=2
 * 
 * 分析：输入一个整数、一个小数，cin将这两个数分别赋予a和b，由于a和b均属于整数型变量，b赋值需进行强制类型转换，因而进行了取整。
 * 
 * (3)
 * 输入 3.14 1.5
 * 运行结果:
 * 请输入两个数:3.14 1.5
 * 3.14+1.5=4.64
 * 3.14-1.5=1.64
 * 3.14*1.5=4.71
 * 3.14/1.5=2.09333
 * 
 * 分析：将a和b改为双精度浮点数类型变量后，输入两个浮点数，由cin赋予a和b，因而得以正常运算。
 * 
 * (4)
 * 输入 3.14 3
 * 运行结果:
 * 请输入两个数:3.14 3
 * 3.14+3=6.14
 * 3.14-3=0.14
 * 3.14*3=9.42
 * 3.14/3=1.04667
 * 
 * 分析：cin 将整数和小数分别赋予a和b,再将两个变量进行计算。
 * 
 * */