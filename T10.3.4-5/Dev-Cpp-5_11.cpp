
#include <iostream>
#include <string>
using namespace std;
class Student{
private:
    long student_id;
    string name;
    char gender;
    int age;
    string profession;
    string phone_num;
public:
    //setter functions
    void setStudentId(long id){
        student_id = id;
    }
    void setName(string n){
        name = n;
    }
    void setGender(char g){
        gender = g;
    }
    void setAge(int a){
        age = a;
    }
    void setProfession(string p){
        profession = p;
    }
    void setPhoneNum(string num){
        phone_num = num;
    }
    //getter functions
    long getStudentId(){
        return student_id;
    }
    string getName(){
        return name;
    }
    char getGender(){
        return gender;
    }
    int getAge(){
        return age;
    }
    string getProfession(){
        return profession;
    }
    string getPhoneNum(){
        return phone_num;
    }
};

int main()
{
	long stud_id, stud_id_alt;
    string name,name_alt;
    char sex,sex_alt;
    int age,age_alt;
    string pro,pro_alt;
    string tel,tel_alt;
	Student student;
	    cout<<"ʹ�ûس��ָ�����:"<<endl;
    cout<<"ѧ��?"<<endl;
    cin>>stud_id;
    cin.ignore();
    cout<<"����?"<<endl;
    getline(cin,name);
    cout<<"�Ա�(f/m)?"<<endl;
    sex=cin.get();
    cin.ignore();
    cout<<"����?"<<endl;
    cin>>age;
    cin.ignore();
    cout<<"רҵ?"<<endl;
    getline(cin,pro);
    cout<<"�绰?"<<endl;
    getline(cin,tel);
	student.setStudentId(stud_id);
	student.setGender(sex);
	student.setName(name);
	student.setAge(age);
	student.setProfession(pro);
	student.setPhoneNum(tel);
	stud_id_alt=student.getStudentId();
	sex_alt=student.getGender();
	name_alt=student.getName();
	age_alt=student.getAge();
	pro_alt=student.getProfession();
	tel_alt=student.getPhoneNum();
	cout<<"ѧ��:"<<stud_id_alt<<"\t����:"<<name_alt<<"\t�Ա�:"<<sex_alt<<"\t����:"<<age_alt<<"\tרҵ:"<<pro_alt<<"\t�绰"<<tel_alt<<endl;
	}

