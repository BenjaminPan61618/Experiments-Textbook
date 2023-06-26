#include <iostream>
using namespace std;

int input_judge()
{
	int in_num;
	do{
		cout<<"Input a number (2-40):";
	cin>>in_num;
	if (in_num<2||in_num>40)
	cout<<"Invalid number, please try again."<<endl;
}while(in_num<2||in_num>40);
return in_num;
}

int main()
{
	int n;
	int i,s=0;
	n=input_judge();
	for(i=1;i<=n;i+=2)
	s+=i*(i+1);
	cout<<s<<endl;
	return 0;
}

