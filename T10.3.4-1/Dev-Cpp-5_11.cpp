#include <iostream>
using namespace std;
class Point{
private:
	int x;
	int y;
public:
	Point(int tx,int ty)
	{
		x=tx;
		y=ty;
		cout<<"���ǹ��캯�����ұ�ִ����"<<endl;
	}
	void printPoint(){
		cout<<"x="<<x<<","<<"y="<<y<<endl;
	}
	~Point(){
		cout<<"���������������ұ�ִ����"<<endl;
	}
};

int main(){
	Point a(4,5);
	a.printPoint();
	return 0;
}



/* 
 * ���н��:
 * ���ǹ��캯�����ұ�ִ����
 * x=4,y=5
 * ���������������ұ�ִ����
*/

/*
 * ������
 * ��������һ���� Point ����
 * ���涨����˽�г�Ա����x, y
 *  �Լ�һ�����캯�� Point(int tx, int ty)
 *  ����Ĳ���tx, ty�ֱ���x��y
 *  Ȼ���ӡ��' ���ǹ��캯�����ұ�ִ����"��仰
 *  ���⻹������һ��˽�����ݳ�Ա���� printPoint()
 *  ��x��y���������
 *  ����һ����������
 *   ���ڴ�ӡ���������������ұ�ִ����"��仰
 *  main �������ù��캯�� Point a(4,5);
 *  ��˽�г�Ա����x��y����ֵ4��5
 *  Ȼ������ printPoint() ���x��y��ֵ
 *  ִ����ɺ󣬳����Զ�������������
 *  ��ӡ���������������ұ�ִ���ˡ�
 */

