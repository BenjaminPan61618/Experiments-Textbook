#include <iostream>
using namespace std;
class Point{
private:
	int x;
	int y;
	static int countPoint;
public:
	Point(int tx){
		x=tx;
		y=0;
		++countPoint;
		cout<<"���ǵ��������캯�����ұ�ִ����"<<endl;
	}
	Point(int tx, int ty){
		x=tx;
		y=ty;
		++countPoint;
		cout<<"����˫�������캯�����ұ�ִ����"<<endl;
	}
	void printPoint(){
		cout<<"x="<<x<<","<<"y="<<y<<endl;
		cout<<"Ŀǰһ����"<<countPoint<<"��Point ����"<<endl;
		}
		~Point(){
			--countPoint;
			cout<<"���������������ұ�ִ����"<<endl;
		}
	};
	int Point::countPoint =0;
	int main(){
		Point a(4,5);
		a.printPoint();
		Point b(5);
		b.printPoint();
		return 0;
	}
	
/* 
 * ���н��:
 * ����˫�������캯�����ұ�ִ����
 * x=4,y=5
 * Ŀǰһ����1��Point ����
 * ���ǵ��������캯�����ұ�ִ����
 * x=5,y=0
 * Ŀǰһ����2��Point ����
 * ���������������ұ�ִ����
 * ���������������ұ�ִ����
*/

/*
 * ������
 * ��������һ���� Point ����
 * ���涨����˽�г�Ա����x, y, countPoint
 *  �Լ��������캯�� Point(int tx) �� Point(int tx, int ty)
 *  ǰ�ߴ��βδ���Ĳ���tx,������x
 *  ���ߴ��βδ���Ĳ���tx, ty�ֱ���x��y
 *  ���߾��ڸ�ֵ����countPoint��������
 *  Ȼ���ӡ��' ���ǵ�(˫)�������캯�����ұ�ִ����"��仰
 *  ���⻹������һ��˽�����ݳ�Ա���� printPoint()
 *  ��x��y�����������ͬʱ���"Ŀǰһ����(countPoint)��Point ����"
 *  ����һ����������
 *   ��ӡ���������������ұ�ִ����"��仰��ͬʱ��countPoint�����Լ�
 *  main �����ȵ��ù��캯�� Point a(4,5);
 *  ��˽�г�Ա����x��y����ֵ4��5
 *  Ȼ������printPoint()���x, y��countPoint��ֵ
 *  main ���������ֵ��ù��캯�� Point a(5);
 *  ��˽�г�Ա����x����ֵ5
 *  Ȼ������printPoint()���x��countPoint��ֵ
 *  ִ����ɺ󣬳����Զ�������������
 *  ��ʱ�������࣬��һ��ִ������������, countPoint�Լ�
 *  ��ӡ���������������ұ�ִ���ˡ�
 *  ��ʱʣ��һ���࣬�ڶ���ִ������������, countPoint�Լ�
 *  ��ӡ���������������ұ�ִ���ˡ�
 */


