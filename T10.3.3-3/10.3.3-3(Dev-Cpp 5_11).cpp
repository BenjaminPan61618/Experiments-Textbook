#include <iostream>
using namespace std;
int k=1;

void main()
{
	int i=4;
	int fun(int);
	fun (i);
	cout<<"(1)i="<<i<<",k="<<k<<endl;
}

int fun(int m)
{
	m+=k;
	k+=m;
	{
		char k='B';
		cout<<"(2)m="<<m<<",k="<<k<<endl;
	}
	cout<<"(3)m="<<m<<",k="<<k<<endl;
	return 0;
}

/* ��1��
 * �޸ĺ�ĳ������£�
 * #include <iostream>
 * using namespace std;
 * int k=1;
 * int fun(int k);
 *
 * int main();
 * {
 * 	int i=4;
 * 	fun (i);
 * 	cout<<"(1)i="<<i<<",k="<<k<<endl;
 * }

 * int fun(int m)
 * {
 * 	m+=k;
 * 	k+=m;
 * 	{
 * 		char k='B';
 * 		cout<<"(2)m="<<m<<",k="<<k<<endl;
 * 	}
 * 	cout<<"(3)m="<<m<<",k="<<k<<endl;
 * 	return 0;
 * }
 */



/* ��2��
 * ��Ŀ������������һ��ȫ�ֱ���k,����Ϊ�丳ֵΪ1
 * Ȼ������һ������fun, �ú�����������һ��char���͵ľֲ�����k,����ֵΪ'B'
 * �˴��ľֲ�����k���ں������й������ڱ�ȫ�ֱ���k
 * �����main����������һ����������i����Ϊ�丳ֵ4��
 * Ȼ�����ִ����һЩ����õ������µ������
 * (2)m=5,k=B //�˴���kΪ�ֲ�����char k
 * (3)m=5,k=6 //�˴���kΪȫ�ֱ���int k
 * (1)i=4,k=6 //�˴���kΪȫ�ֱ���int k
 */

