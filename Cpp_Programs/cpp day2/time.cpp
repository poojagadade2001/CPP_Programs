/*Create the following classes and write their appropriate class members and
display proper information to user.
a) Time b) Date c) Person d) Student
e) Fan f) Point
g)Box*/

#include<iostream>
using namespace std;
class time1
{
public:
int hour;
int minute;
int second;
void setdata()
{
  cout<<"enter hour minute & second";
  cin>>hour>>minute>>second;
 } 
void showdata()
{
cout<<"hour"<<hour<<"\n"<<"minute"<<minute<<"\n"<<"second"<<second<<"\n";
}
};



class date2
{
public:
int day;
int month;
int year;
void setdata()
{
  cout<<"enter day month & year";
  cin>>day>>month>>year;
 } 
void showdata()
{
cout<<""<<day<<"\\"<<month<<"\\"<<year;
}
};



class person
{
public:
char name[20];
char address[20];
long int mobileno;
void setdata()
{
  cout<<"\nenter name address & mobileno";
  cin>>name>>address>>mobileno;
 } 
void showdata()
{
cout<<"enter name"<<name<<"\n"<<"enter the address"<<address<<"\n"<<"mobile no\n"<<mobileno;
}
};






int main()
  {
  time1 t;
  t.setdata();
  t.showdata();
  
  date2 d;
  d.setdata();
  d.showdata();
   
   person p;
   p.setdata();
   p.showdata();
   
   
  return 0;
  }
  
  
  
    
