#include <iostream>
using namespace std;
class Point{
	private:
	int x;
	int y;
	public:
	Point(int tx,int ty){
		x=tx;
		y=ty;
		cout<<"����˫�������캯�����ұ�ִ����"<<endl;
	}
	void printPoint(){
		cout<<"x="<<x<<","<<"y="<<y<<endl;
	}
	friend void getPointX(Point &);
};
void getPointX(Point &p){
	cout<<"���� Point ����Ԫ���� X="<<p.x<<endl;
} 
int main(){
	Point a(4,5);
	a.printPoint();
	getPointX(a);
	return 0;
}

/* 
 * ���н��:
 * ����˫�������캯�����ұ�ִ����
 * x=4,y=5
 * ���� Point ����Ԫ���� X=4
*/

/*
 * ������
 * ��������һ���� Point ����
 * ���涨����˽�г�Ա����x, y
 * ������һ�����캯�� Point(int tx, int ty)
 *  ����Ĳ���tx, ty�ֱ���x��y
 *  Ȼ���ӡ��' ����˫�������캯�����ұ�ִ����"��仰
 *  ���⻹������һ��˽�����ݳ�Ա���� printPoint()
 *  ��x��y���������
 *  ����һ��Point �����Ԫ����
 *  ���ڴ�ӡ������ Point ����Ԫ���� X=(x ��ֵ)"��仰
*/

