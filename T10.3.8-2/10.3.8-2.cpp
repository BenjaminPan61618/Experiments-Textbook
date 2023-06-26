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
//virtual void Watch()const  // 第2问修改部分
{
	cout<<this->cityName<<" 没有家"<<endl;
}
};

 class Chengdu :  public City
{ 
public:
 Chengdu(string _cityName):City(_cityName){}
void Watch() const
{
	cout<<this->cityName<<" 住在成都"<<endl;
}
};
class Yaan : public City
{
	public:
	Yaan(string _cityName) :City(_cityName){}
	virtual void Watch() const
	//virtual void Watch() const  // 第2问修改部分
	{
		cout<<this->cityName<<" 住在雅安"<<endl;
	}
	};
		
	int main()
	{
		City city("小王"),*Pointer=nullptr;
		Chengdu chengdu("小张");
		Yaan yaan("小李");
		Pointer=&city;
		Pointer->Watch();
		Pointer=&chengdu;
		Pointer->Watch();
		Pointer=&yaan;
		Pointer->Watch();
		return 0;
	}



/* 1. 输出结果；
 * 小王 没有家
 * 小张 没有家
 * 小李 没有家
 *
 * 分析:指针指向chengdu对象和yaan对象时，将这两个对象按基类处理，因此访问基类指针中的cityName得到‘ 没有家’ 的返回值
 */


/* 2. 修改后的结果
 * 小王 没有家
 * 小张 住在成都
 * 小李 住在雅安
 */
