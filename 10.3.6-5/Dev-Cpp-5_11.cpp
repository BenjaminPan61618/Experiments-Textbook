#include <iostream>
using namespace std;

//����ѧ����

class Student{

public:

    int id;

    int score;

    

};



//����max����

void max(Student* students, int size){

    int max_score = 0;

    int max_index = 0;

    for(int i=0; i<size; i++){

        if(students[i].score > max_score){

            max_score = students[i].score;

            max_index = i;

        }

    }

    cout << "��߷�ѧ����Ϣ��" << endl;

    cout << "ѧ�ţ�" << students[max_index].id << endl;

    cout << "�ɼ���" << students[max_index].score << endl;

}



int main(){

    //����ѧ����������

   Student students[10];

for(int i=0; i<10; i++){

    cout << "�������" << i+1 << "��ѧ����ѧ�źͳɼ���" << endl;

    cin >> students[i].id >> students[i].score;

}

    //����max����

    max(students, 10);

    return 0;

}
