#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"请输入矩阵的大小n：";
    cin>>n;
    int a[n][n];
    cout<<"请输入矩阵的元素："<<endl;
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
    cout<<"两条对角线元素值之和为："<<sum1+sum2<<endl;
    cout<<"最大值为："<<max<<"，下标为：("<<max_i<<","<<max_j<<")"<<endl;
    cout<<"最小值为："<<min<<"，下标为：("<<min_i<<","<<min_j<<")"<<endl;
    return 0;
}

 
