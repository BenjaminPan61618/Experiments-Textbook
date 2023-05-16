#include<iostream>

using namespace std;

int main()

{

    int a[10];

    int *p=a;

    for(int i=0;i<10;i++)

    {

        cin>>*(p+i);

    }

    int max=*p,min=*p;

    int max_index=0,min_index=0;

    for(int i=0;i<10;i++)

    {

        if(*(p+i)>max)

        {

            max=*(p+i);

            max_index=i;

        }

        if(*(p+i)<min)

        {

            min=*(p+i);

            min_index=i;

        }

    }

    cout<<"Max number is "<<max<<" and its index is "<<max_index<<endl;

    cout<<"Min number is "<<min<<" and its index is "<<min_index<<endl;

    return 0;

}


