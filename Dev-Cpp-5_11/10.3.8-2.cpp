#include <string>
#include <iostream>
using namespace std;
class City
{
protected:
string cityName;
public:
City()=default;
City(string _cityName):cityName(_cityName){};
void Watch()const
//virtual void Watch()const  // ��2���޸Ĳ���
{
	cout<<this->cityName<<" û�м�"<<endl;
}
};

 class Chengdu :  public City
{ 
public:
 Chengdu(string _cityName):City(_cityName){}
void Watch() const
{
	cout<<this->cityName<<" ס�ڳɶ�"<<endl;
}
};
class Yaan : public City
{
	public:
	Yaan(string _cityName) :City(_cityName){}
	virtual void Watch() const
	//virtual void Watch() const  // ��2���޸Ĳ���
	{
		cout<<this->cityName<<" ס���Ű�"<<endl;
	}
	};
		
	int main()
	{
		City city("С��"),*Pointer=nullptr;
		Chengdu chengdu("С��");
		Yaan yaan("С��");
		Pointer=&city;
		Pointer->Watch();
		Pointer=&chengdu;
		Pointer->Watch();
		Pointer=&yaan;
		Pointer->Watch();
		return 0;
	}



/* 1. ��������
 * С�� û�м�
 * С�� û�м�
 * С�� û�м�
 *
 * ����:ָ��ָ��chengdu�����yaan����ʱ�������������󰴻��ദ������˷��ʻ���ָ���е�cityName�õ��� û�мҡ� �ķ���ֵ
 */


/* 2. �޸ĺ�Ľ��
 * С�� û�м�
 * С�� ס�ڳɶ�
 * С�� ס���Ű�
 */
