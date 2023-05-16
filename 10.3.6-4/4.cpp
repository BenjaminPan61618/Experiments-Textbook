#include<iostream>
using namespace std;
int main()
{
    char str[200];
    int total=0,upper=0,lower=0,digit=0,other=0;
    cout<<"Please input a string:"<<endl;
    cin.getline(str,200);
    for(int i=0;str[i]!='\0';i++)
    {
        if(str[i]>='A'&&str[i]<='Z')
            upper++;
        else if(str[i]>='a'&&str[i]<='z')
            lower++;
        else if(str[i]>='0'&&str[i]<='9')
            digit++;
        else
            other++;
        total++;
    }
    cout<<"Total characters: "<<total<<endl;
    cout<<"Uppercase letters: "<<upper<<endl;
    cout<<"Lowercase letters: "<<lower<<endl;
    cout<<"Digits: "<<digit<<endl;
    cout<<"Other characters: "<<other<<endl;
    return 0;
}
