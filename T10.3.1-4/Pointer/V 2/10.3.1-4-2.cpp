#include <iostream>
using namespace std;

int calculate(int num_in, int* num_1,int* num_2, int* num_3, int* num_4)
{
	int i,sum,pos=1000;
	for (i=0;i<4;i++)
	{
		
		switch (i)
		{
		case 0:
		*num_1=num_in/pos;
		break;
		case 1:
		*num_2=num_in/pos;
		break;
		case 2:
		*num_3=num_in/pos;
		break;
		case 3:
		*num_4=num_in;	
		break;
		default:
		break;
	}
	num_in%=pos;
	pos/=10;
}
sum=*num_1+*num_2+*num_3+*num_4;
return sum;
}

int main(int atgc, char* argv[])
{
	int num_in,num_out;
	int num_1, num_2, num_3, num_4;
	cout<<"Insert a number:";
	cin>>num_in;
	num_out=calculate (num_in,&num_1,&num_2,&num_3,&num_4);
	cout<<num_1<<"+"<<num_2<<"+"<<num_3<<"+"<<num_4<<"="<<num_out<<endl;
	return 0;
}

