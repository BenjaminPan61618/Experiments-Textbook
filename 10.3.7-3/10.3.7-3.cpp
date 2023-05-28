#include <iostream>
#include <string>
using namespace std;
class Person{
public:
int id;
string name;
char sex;
int age;
friend void input_data(Person &p);
};

 
class Student:public Person{
public:
string department;
double score;
void setdept();
void display_info();
};

class Teacher:public Person{
public:
string title;
string department;
void setdept();
void display_info();
};

 
void input_data(Person& p){
    cout<<"Please enter the id: ";
    cin>>p.id;
    cin.ignore();
    cout<<"Please enter the name: ";
    getline(cin,p.name);
	
    cout<<"Please enter the sex: ";
    cin.get(p.sex);
    cout<<"Please enter the age: ";
    cin>>p.age;
       cin.ignore();
}
 
void Student::setdept(){
	 
    cout<<"Please enter the department: ";
    getline(cin,department);
    cout<<"Please enter the score: ";
    cin>>score;
}

void Teacher::setdept(){
    cout<<"Please enter the title: ";
     getline(cin,title);

    cout<<"Please enter the department: ";
     getline(cin,department);
}

void Student::display_info(){
	cout<<"Student ID:"<<id<<"\tStudent Name:"<<name<<"\tStudent Department:"<<department<<"\tStudent Gender:"<<sex<<"\tStudent Age:"<<age<<"\tStudent Score:"<<score<<endl; 
}
void Teacher::display_info(){
	cout<<"Teacher ID:"<<id<<"\tTeacher Name:"<<name<<"\tTeacher Department:"<<department<<"\tTeacher Gender:"<<sex<<"\tTeacher Age:"<<age<<"\tTeacher Title:"<<title<<endl; 
}

int main(){
	    
    int num;
    cout<<"Please enter the number of teachers and students: ";
    cin>>num;
    Student *s = new Student[num];
    Teacher *t = new Teacher[num];
    for(int i=0;i<num;i++){
        cout<<"Please enter the information of student "<<i+1<<endl;
        input_data(s[i]);
        s[i].setdept();
        cout<<"Please enter the information of teacher "<<i+1<<endl;
        input_data(t[i]);
        t[i].setdept();
    }
    cout<<"The information of all students:"<<endl;
    for(int i=0;i<num;i++){
        s[i].display_info();
        cout<<endl;
    }
    cout<<"The information of all teachers:"<<endl;
    for(int i=0;i<num;i++){
        t[i].display_info();
        cout<<endl;
    }
return 0;
}
