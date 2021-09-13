*Implement inline function for the following programs-
a. Square of the number

b. Cube of the number
c. Area of rectangle*/


#include<iostream>
using namespace std;
class square{
private :
int n,r;
public:
void get_Data();
void calc_data();
void show_data();

    
};
inline void square::get_Data()
{
cout<<"\nenter an integer:";
cin>>n;
}
inline void square::calc_data()
{
r=n*n;
}
inline void square::show_data()
{
cout<<"\n square of integer:"<<r;

}

class cube{
private :
int n,r;
public:
void get_Data();
void calc_data();
void show_data();

    
};
inline void cube::get_Data()
{
cout<<"\nenter an integer:";
cin>>n;
}
inline void cube::calc_data()
{
 r=n*n*n;
}
inline void cube::show_data()
{
cout<<"\n cube of integer:"<<r;
}


class rectangle{
private :
int l,b,r;
public:
void get_Data();
void calc_data();
void show_data();

    
};
inline void rectangle::get_Data()
{
cout<<"\nenter an length and breath:";
cin>>l>>b;
}
inline void rectangle::calc_data()
{
 r=l*b;
}
inline void rectangle::show_data()
{
cout<<"\n rectangle of integer:" <<r;
}



int main()
{
square s;
s.get_Data();
s.calc_data();
s.show_data();
    
cube c;
c.get_Data();
c.calc_data();
c.show_data();

rectangle r;
r.get_Data();
r.calc_data();
r.show_data();
}

