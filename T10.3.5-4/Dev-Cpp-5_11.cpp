#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"���������Ĵ�Сn��";
    cin>>n;
    int a[n][n];
    cout<<"����������Ԫ�أ�"<<endl;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>a[i][j];
        }
    }
    int sum1=0,sum2=0,max=a[0][0],min=a[0][0],max_i=0,max_j=0,min_i=0,min_j=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(i==j){
                sum1+=a[i][j];
            }
            if(i+j==n-1){
                sum2+=a[i][j];
            }
            if(a[i][j]>max){
                max=a[i][j];
                max_i=i;
                max_j=j;
            }
            if(a[i][j]<min){
                min=a[i][j];
                min_i=i;
                min_j=j;
            }
        }
    }
    cout<<"�����Խ���Ԫ��ֵ֮��Ϊ��"<<sum1+sum2<<endl;
    cout<<"���ֵΪ��"<<max<<"���±�Ϊ��("<<max_i<<","<<max_j<<")"<<endl;
    cout<<"��СֵΪ��"<<min<<"���±�Ϊ��("<<min_i<<","<<min_j<<")"<<endl;
    return 0;
}

 
