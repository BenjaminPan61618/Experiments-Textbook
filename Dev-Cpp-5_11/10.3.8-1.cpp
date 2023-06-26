
#include <iostream>
using namespace std;
class Fraction
{
public:
Fraction(int _numerator, int _denominator=1);			// ���캯��
Fraction operator+(const Fraction& fra) const;			// ��Ա��������ص�+�����
friend Fraction operator-(const Fraction &fra, const Fraction &frb); // ��Ԫ��������ص�-�����
friend Fraction operator*(const Fraction &fra, const Fraction &frb); 
friend Fraction operator/(const Fraction &fra, const Fraction &frb); 
friend ostream &operator<<(ostream &os, const Fraction &fra);
private:
int numerator;
int denominator;
static int Abs(const int &n) {return n<0?-n:n;};
};

Fraction Fraction::operator + (const Fraction& rv) const
{
	return Fraction(numerator* rv.denominator + rv.numerator* denominator, denominator * rv.denominator); // (a/b)+(c/d)=(a*d+b*c/b*d)
}
Fraction operator - (const Fraction &fra, const Fraction & frb)
{
	return Fraction(fra.numerator * frb.denominator - frb.numerator * fra.denominator, fra.denominator * frb.denominator);
}

Fraction operator * (const Fraction &fra, const Fraction & frb)
{
	return Fraction((fra.numerator * frb.numerator),(fra.denominator * frb.denominator));
}
Fraction operator / (const Fraction &fra, const Fraction & frb)
{
	 if (fra.numerator == 0) {
        cout << "��������Ϊ0" << endl;
        return Fraction(0, 1);}
	return Fraction((fra.numerator * frb.denominator),(fra.denominator * frb.numerator ));
}

ostream &operator <<(ostream &os, const Fraction &fra)
{
	if (fra.numerator==0)os<<0;
	else if(fra.numerator<0) os<<"("<<fra.numerator<<'/'<<fra.denominator<<")";
	else os<<fra.numerator<<'/'<<fra.denominator;
	return os;
};

Fraction::Fraction(int _numerator, int _denominator)
{
	if(_denominator==0){
		cout<<"��ĸ����Ϊ0"<<endl;
		return;
	};
	if((_numerator >=0 && _denominator>0) || (_numerator<=0 && _denominator<0))
	{
		this->numerator=Abs(_numerator);
		this->denominator=Abs(_denominator);
	}
	else{
		this->numerator=-Abs(_numerator);
		this->denominator=Abs(_denominator);
	}
	};
int main()
{
	//Fraction fra1(1,2); /* ����һ������ */
	//Fraction fra2(1,3); /* ������һ������ */
	Fraction fra1(3,4); /* ����һ������ */
	Fraction fra2(1,4); /* ������һ������ */
	cout<<fra1<<"+"<<fra2<<"="<<fra1+fra2<<endl;
	cout<<fra1<<"-"<<fra2<<"="<<fra1 - fra2<<endl;
	cout<<fra1<<"*"<<fra2<<"="<<fra1 * fra2<<endl;
	cout<<fra1<<"/"<<fra2<<"="<<fra1 / fra2<<endl;
	return 0;
}



/* 1. ���н��:
 * 1/2+1/3=5/6
 * 1/2-1/3=1/6
 * 
 */

/* 2. �޸ĵ���ֵ�� fra1(3,4) fra2(1,4��
 * ���н����
 * 3/4+1/4=16/16
 * 3/4-1/4=8/16
 * 
 */

/* 3. ���н����
 * 3/4+1/4=16/16
 * 3/4-1/4=8/16
 * 3/4*1/4=3/16
 * 3/4/1/4=12/4
 * 
 */


