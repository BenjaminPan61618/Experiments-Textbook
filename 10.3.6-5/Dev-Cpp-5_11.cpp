#include <iostream>
using namespace std;

//定义学生类

class Student{

public:

    int id;

    int score;

    

};



//定义max函数

void max(Student* students, int size){

    int max_score = 0;

    int max_index = 0;

    for(int i=0; i<size; i++){

        if(students[i].score > max_score){

            max_score = students[i].score;

            max_index = i;

        }

    }

    cout << "最高分学生信息：" << endl;

    cout << "学号：" << students[max_index].id << endl;

    cout << "成绩：" << students[max_index].score << endl;

}



int main(){

    //创建学生对象数组

   Student students[10];

for(int i=0; i<10; i++){

    cout << "请输入第" << i+1 << "个学生的学号和成绩：" << endl;

    cin >> students[i].id >> students[i].score;

}

    //调用max函数

    max(students, 10);

    return 0;

}
