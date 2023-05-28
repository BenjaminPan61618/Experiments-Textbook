#include <iostream>
#include <string>
using namespace std;
class Time
{
      public:
            Time(int h, int m,int s)
            {
                  hours=h;
                  minutes=m;
                  seconds=s;
            }
            void time_display()
            {
                  cout<<"出生时间:"<<hours<<"时"<<minutes<<"分"<<seconds<<"秒"<<endl;
            }
            protected:
                  int hours,minutes,seconds;
            };
            class Date
            {
                  public:
                  Date(int m,int d,int y)
                  {
                        month=m;
                        day=d;
                        year=y;
                  }
                  void date_display()
                  {
                        cout<<"出生年月:"<<year<<"年"<<month<<"月"<<day<<"日"<<endl;
                        }
                        protected:
                        int month,day,year;
                        };
                        
                        class Birthtime:private Date, private Time{
                              public:
                              Birthtime(int months, int days, int years, int hour, int minute, int second):Date( months, days, years), Time(hour, minute, second){};
                              void setname(){
                                    cout<<"请输入姓名：";
                                    getline(cin,name);}
                                    void getinfo(){
                                    Date::date_display();
                                    Time::time_display();
                                    cout<<"姓名："<<name<<endl;}
                              private:
                              string name;
                              };

int main(){
            
      int birth_mon,birth_day,birth_year,birth_hour,birth_min,birth_sec;
      cout<<"出生年月 (月 日 年 时 分 秒):"<<endl;
      cin>>birth_mon>>birth_day>>birth_year>>birth_hour>>birth_min>>birth_sec;
            Birthtime b(birth_mon,birth_day,birth_year,birth_hour,birth_min,birth_sec);
    cin.ignore();
    b.setname();
      b.getinfo();
      return 0;}
