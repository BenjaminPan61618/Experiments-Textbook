#include <iostream>
#include <string>
using namespace std;
void HtoD (string str)
{
//�������д�����������ת����������
int dec = stoi(str, nullptr, 16);
cout<<"ת�����Ϊ:"<<dec<<endl;
}

void main()
{
	string hs;
	cout<<"������һ��ʮ��������:";
	cin>>hs;
	HtoD(hs); //���ú�����ʵת���Ľ��;
}

