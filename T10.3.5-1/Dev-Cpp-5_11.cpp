#include <iostream>
using namespace std;
void main()
{
    const int N=10;
    int a[N]; //定义一个大小为N的整型数组a
    int s,i,j,t;
    for (i=0; i<N; i++)
        if(i%2)
            a[i]=i*i; //如果i是奇数，a[i]等于i的平方
        else
            a[i]=100-(i/2)*(i/2); //如果i是偶数，a[i]等于100减去i/2的平方
    for (i=0; i<N; i++)
        cout<<a[i]<<" "; //输出数组a的元素
    cout<<endl;
    s=0;
    for(i=0; i<N; i++)
        s=s+a[i]; //计算数组a的元素之和
    cout<<"sum of a="<<s<<endl;
    for (i=0;i<N; i++)
    {
        t=a[i];
        j=i-1;
        while (j>=0 && t>a[j])
        {
            a[j+1]=a[j];
            j--;
        }
        a[j+1]=t;
    } //使用插入排序对数组a进行排序
    for (i=0;i<N;i++)
        cout<<a[i]<<" "; //输出排序后的数组a的元素
    cout<<endl;
}

/*
 * 运行结果； 
 * 100 1 99 9 96 25 91 49 84 81
 * sum of a=635
 * 100 99 96 91 84 81 49 25 9 1
 * 
 * 数组a的定义：定义了一个大小为N的整型数组a
 * 数组a的赋值：使用for循环和if-else语句对数组a进行赋值，如果i是奇数，a[i]等于i的平方，否则a[i]等于100减去i/2的平方
 * 数组a的应用：计算数组a的元素之和，使用插入排序对数组a进行排序，并输出排序后的数组a的元素
 *
 * 程序的功能：这个程序的功能是定义了一个大小为10的整型数组a，使用for循环和if-else语句对数组a进行赋值。
 * 如果i是奇数，a[i]等于i的平方，否则a[i]等于100减去i/2的平方。然后计算数组a的元素之和，使用插入排序对数组a进行排序，并输出排序后的数组a的元素。
 */
