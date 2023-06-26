#include <iostream>
using namespace std;
int main(int argc, char* argv[])
{
	double cny,usd,jpy,gbp;
	cout<<"Insert 人民币(CNY):RMB￥";
	cin>>cny;
	usd=6.2765 * cny;
	jpy=0.05842 * cny;
	gbp=8.907 * cny;
	cout<<"美元(USD) $"<<usd<<", 日元(JPY)￥"<<jpy<<", 英镑(GBP)"<<gbp<<endl;
	return 0;
}
