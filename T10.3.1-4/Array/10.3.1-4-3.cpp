#include <iostream>
using namespace std;

int calculate(int num_in, int num[])
{
	int i,sum=0,pos=1000;
	for (i=0;i<4;i++)
	{
		num[i]=num_in/pos;
		num_in%=pos;
		pos/=10;
		sum+=num[i];
	}

return sum;
}

int main(int atgc, char* argv[])
{
	int num_in,num_out,i;
	int num[4];
	cout<<"Insert a number:";
	cin>>num_in;
	num_out=calculate (num_in,num);
		for (i=0;i<4;i++)
		{
			if (i<3)
	cout<<num[i]<<"+";
	else
	cout<<num[i]<<"="<<num_out<<endl;
}
	return 0;
}

