#include <iostream>
using namespace std;

int compare_sum(int in_num)
{
	int result=0;
	result += (in_num % 3 == 0 ? 3 : 0);        //如果能被3整除，result 加 3
	result += (in_num % 5 == 0 ? 5 : 0);        //如果能被5整除，result 加 5
	result += (in_num % 7 == 0 ? 7 : 0);        //如果能被7整除，result 加 7
	return result;
}

int main()
{
	int in_num,result=0;
	cout << "Input an integer:";
	cin >> in_num;
	result=compare_sum(in_num);
	if(result==0)
	cout << "Can't be divided by 3, 5, 7 with no remainder.\n";   //result==0
	else if(result==3)
	cout << "Can be divided by 3 only with no remainder.\n";     //result==3
	else if(result==5)
	cout << "Can be divided by 5 only with no remainder.\n";     //result==5
	else if(result==7)
	cout << "Can be divided by 7 only with no remainder.\n";     //result==7
	else if(result==8)
	cout << "Can be divided by 3 and 5 with no remainder.\n";    //result==3+5
	else if(result==10)
	cout << "Can be divided by 3 and 7 with no remainder.\n";    //result==3+7
	else if(result==12)
	cout << "Can be divided by 5 and 7 with no remainder.\n";    //result==5+7
	else if(result==15)
	cout << "Can be divided by 3, 5 and 7 with no remainder.\n"; //result==3+5+7
	else
	cout<<"Unexpected"<<endl;
	return 0;
}

