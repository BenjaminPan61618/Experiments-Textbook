#include<iostream>
using namespace std;
int hcf(int u,int v)
{
	int a,b,t,r;
	if(u>v)
	{
		t=u;
		u=v;
		v=t;
	}
	a=u;
	b=v;
	while((r=b%a)!=0)
	{
		b=a;
		a=r;
	}
	return(a);
}
int lcd(int u,int v, int h)
{
	return(u*v/h);
}
void main()
{
	int u,v,h,l;
	cout<<"请输入两个正整数";
	cin>>u>>v;
	h=hcf(u,v);
	cout<<"hcf="<<h<<endl;
	l=lcd(u,v,h);
	cout<<"lcd="<<l<<endl;
}

/* （1）
 * 第一组： 4 5
 * 输出：
 * hcf=1
 * lcd=20
 * 
 * 第二组： 4 6
 * 输出：
 * hcf=2
 * lcd=12
 * 
 * 第三组： 4 8
 * 输出：
 * hcf=4
 * lcd=8
 * 
 * 第四组： 12 9
 * 输出：
 * hcf=3
 * lcd=36
 * 
 * 第五组： 12 6
 * 输出：
 * hcf=6
 * lcd=12
 */
 
 /* (2)
  * hcf函数用于计算最大公约数（Highest common factor, HCF)
  */
  
 /* (3)
  * lcf函数用于计算最小公因素 (Lowest common factor, LCF)
  */

