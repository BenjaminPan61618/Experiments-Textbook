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
	cout<<"����������������";
	cin>>u>>v;
	h=hcf(u,v);
	cout<<"hcf="<<h<<endl;
	l=lcd(u,v,h);
	cout<<"lcd="<<l<<endl;
}

/* ��1��
 * ��һ�飺 4 5
 * �����
 * hcf=1
 * lcd=20
 * 
 * �ڶ��飺 4 6
 * �����
 * hcf=2
 * lcd=12
 * 
 * �����飺 4 8
 * �����
 * hcf=4
 * lcd=8
 * 
 * �����飺 12 9
 * �����
 * hcf=3
 * lcd=36
 * 
 * �����飺 12 6
 * �����
 * hcf=6
 * lcd=12
 */
 
 /* (2)
  * hcf�������ڼ������Լ����Highest common factor, HCF)
  */
  
 /* (3)
  * lcf�������ڼ�����С������ (Lowest common factor, LCF)
  */

