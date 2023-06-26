#include <iostream>
using namespace std;

class Fraction
{
public:
    Fraction(int _numerator, int _denominator=1); // ���캯��
    Fraction operator+(const Fraction& fra) const; // ��Ա��������ص�+�����
    friend Fraction operator-(const Fraction &fra, const Fraction &frb); // ��Ԫ��������ص�-�����
    friend Fraction operator*(const Fraction &fra, const Fraction &frb); 
    friend Fraction operator/(const Fraction &fra, const Fraction &frb); 
    friend ostream &operator<<(ostream &os, const Fraction &fra);
private:
    int numerator;
    int denominator;
    static int Abs(const int &n) {return n<0?-n:n;};
    static int GCD(int a, int b); // �������Լ���ĸ�������
    void reduce(); // Լ�ֺ���
};

int Fraction::GCD(int a, int b) {
    if (b == 0) {
        return a;
    }
    return GCD(b, a % b);
}

void Fraction::reduce() {
    int gcd = GCD(numerator, denominator);
    numerator /= gcd;
    denominator /= gcd;
}

Fraction Fraction::operator + (const Fraction& rv) const
{
    Fraction result(numerator* rv.denominator + rv.numerator* denominator, denominator * rv.denominator);
    result.reduce();
    return result;
}

Fraction operator - (const Fraction &fra, const Fraction & frb)
{
    Fraction result(fra.numerator * frb.denominator - frb.numerator * fra.denominator, fra.denominator * frb.denominator);
    result.reduce();
    return result;
}

Fraction operator * (const Fraction &fra, const Fraction & frb)
{
    Fraction result((fra.numerator * frb.numerator),(fra.denominator * frb.denominator));
    result.reduce();
    return result;
}

Fraction operator / (const Fraction &fra, const Fraction & frb)
{
    if (fra.numerator == 0) {
        cout << "��������Ϊ0" << endl;
        return Fraction(0, 1);
    }
    Fraction result((fra.numerator * frb.denominator),(fra.denominator * frb.numerator ));
    result.reduce();
    return result;
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
    reduce();
};

int main()
{
    Fraction fra1(3,4); // ����һ������
    Fraction fra2(1,4); // ������һ������
    cout<<fra1<<"+"<<fra2<<"="<<fra1+fra2<<endl;
    cout<<fra1<<"-"<<fra2<<"="<<fra1 - fra2<<endl;
    cout<<fra1<<"*"<<fra2<<"="<<fra1 * fra2<<endl;
    cout<<fra1<<"/"<<fra2<<"="<<fra1 / fra2<<endl;
    return 0;
}

