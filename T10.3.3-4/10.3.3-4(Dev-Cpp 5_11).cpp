#include <iostream>
#include <iomanip>
using namespace std;
void subp()
{
		static int x=0, y=0; /*����*/
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
 * ���н��:
 * a=0,b=0
 * x=5,y=8
 * a=0,b=0
 * x=5,y=8
 * a=9,b=3
 * x=6,y=12
 * 
 * ������
 * ��������һ������subp()���������е���������x��y��ʼ��Ϊ0
 * Ȼ������a��b��x��y���м��㲢����ֵ��ӡ����
 * main ���������еı���a��b�ֱ��ʼ��Ϊ9��3������a��b����x��y�󣬵���subp�������м���
 * �������a��b��x��y
 */

/* (2)
 * �ᷢ���仯�����н����
 * a=0,b=0
 * x=5,y=8
 * a=-3,b=13
 * x=10,y=16
 * a=9,b=3
 * x=6,y=12
 * ������x��y������Ϊ��̬����
 * subp��������ʱ�����ǵ�ֵ�����ֲ��䡣
 */

