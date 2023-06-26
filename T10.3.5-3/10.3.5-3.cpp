#include<iostream>
using namespace std;
int main(){
    int a[10],max,min,max_index,min_index;
    for(int i=0;i<10;i++){
        cin>>a[i];
    }
    max=a[0];
    min=a[0];
    for(int i=0;i<10;i++){
        if(a[i]>max){
            max=a[i];
            max_index=i;
        }
        if(a[i]<min){
            min=a[i];
            min_index=i;
        }
    }
    cout<<"最大数为"<<max<<"，在数组中的序号为"<<max_index<<endl;
    cout<<"最小数为"<<min<<"，在数组中的序号为"<<min_index<<endl;
    return 0;
}
