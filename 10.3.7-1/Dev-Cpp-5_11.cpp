#include <iostream>
using namespace std;
class Base{public:
void setx(int i)
{x=i;}
int getx()
{return x;}
public:
int x;
};
class Derived: public Base{
public:
void sety(int i)
{y=i;}
int gety()
{return y;}
void show()
{cout<<"Base::x="<<x<<endl;}
public:
 int y;
};
int main()
{
      Derived bb;
      bb.setx(25);
      bb.sety(30);
      bb.show();
      cout<<"Base::x="<<bb.x<<endl;
      cout<<"Derived::y="<<bb.y<<endl;
      cout<<"Base::x="<<bb.getx()<<endl;
      cout<<"Derived::y="<<bb.gety()<<endl;
      return 0;
}  

/* (1) ���н��:
 * Base::x=25
 * Base::x=25
 * Derived::y=30
 * Base::x=25
 * Derived::y=30
 *
 * ������
 * ����������������ࣺBase �� Derived. ���У�Derived ��̳��� Base �࣬�������һ���µĳ�Ա����y��һ���µĳ�Ա����sety()��gety().
 * ��main()�����У����Ǵ����� Derived ���һ������ bb����ʹ��setx()��sety()�����ֱ�������x��y��ֵ��
 * Ȼ�������show()�������������Base::x��ֵ��������������ֱ������ bb �����x��y��ֵ���Լ�ʹ��getx()��gety()������ȡ��x��y��ֵ��
 * ��ΪDerived��̳���Base�࣬���������Է���Base��ĳ�Ա����x��
 * ��show()�����У����������Base::x��ֵ��
 * ��main()�����У�����ֱ������bb�����x��y��ֵ���Լ�ʹ��getx()��gety()������ȡ��x��y��ֵ��
 * ����bb������Derived���һ���������������Է���Base��ĳ�Ա����x���Լ��ĳ�Ա����y��
 * ��ˣ�����Ľ����Base::x��ֵ��bb.x��ֵ��ͬ����Derived::y��ֵ��bb.y��ֵ��ͬ��
 */

//��2����gcc/g++��Dev-C++, Geany, Cxxdroid��) �������ʾ��10.3.7-1.cpp:29:30: error: ��int Base::x�� is private within this context�� (���������ﾳ�У�Base �����е� x ��˽�����ݳ�Ա)
// ԭ�� �趨Ϊ˽��(private)���Ժ�����޷����� Base �ڲ���˽�г�Ա x.

//��3����gcc/g++��Dev-C++, Geany, Cxxdroid��) �������ʾ"10.3.7-1.cpp:29:30: error: ��int Base::x�� is protected within this context�� (���������ﾳ�У�Base �����е� x ���ܱ�����Ա)
// ԭ�� �趨Ϊ�ܱ���(protected)���Ժ�����޷����� Base �ڲ���˽�г�Ա x.

// (4) ��gcc/g++��Dev-C++, Geany, Cxxdroid��) �������ʾ"10.3.7-1.cpp:25:16: error: ��void Base::setx(int)�� is inaccessible within this context"(setx ���ɷ���)
//                                                                             "10.3.7-1.cpp:28:30: error: ��int Base::x�� is inaccessible within this context"(x ���ɷ���)
//                                                                             "10.3.7-1.cpp:25:16: error: ��Base�� is not an accessible base of ��Derived�� "��Base ���� Derived ���Է��ʵ�һ�����ࣩ
// ԭ�� �� Base �е�����˽�м̳е� Derived ��תΪ˽�г�Ա������ main �����޷����� setx ��x.

// (5) ��gcc/g++��Dev-C++, Geany, Cxxdroid��) �������ʾ"10.3.7-1.cpp:25:16: error: ��void Base::setx(int)�� is inaccessible within this context" (setx ���ɷ���)
//                                                                             "10.3.7-1.cpp:25:16: error: ��Base�� is not an accessible base of ��Derived��"��Base ���� Derived ���Է��ʵ�һ�����ࣩ
//                                                                             "10.3.7-1.cpp:28:30: error: ��int Base::x�� is inaccessible within this context(x ���ɷ���)
// ԭ�� �� Base �е����ݱ����̳е� Derived ��תΪ�ܱ�����Ա��   main �����޷����� setx ��x.
