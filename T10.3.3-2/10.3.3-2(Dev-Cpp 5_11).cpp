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
 * ����fib()���û��������л�ȡһ������g��������쳲����������еĵ�g������
 * ���gΪ0����������0�����g��1��2����������1��
 * ���򣬺�������쳲����������еڣ�g-1�����͵ڣ�g-2�������ֵĺ͡�
 * ���������У�����kʹ��fib()����������쳲����������е�7�����ֵ�ֵ��
 * ���k��ֵ����ӡ������
 */

