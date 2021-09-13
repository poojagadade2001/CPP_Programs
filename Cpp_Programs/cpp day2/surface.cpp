/*Q.4 Write a Program to implement a sphere class with appropriate members
and
member function to find the surface area and the volume.
(Surface = 4 π r2 and Volume = 4/ 3 π r3)*/

#include<iostream>
using namespace std;
class sphere1
{
public:
int sphere;
int volume;
};
void sphere(int r)
 {
cout<<"\n surface area "<<4*3.14*r;
 }
void volume(int r1)
{
cout<<"\n volume"<<4/3*3.14*r1;
}
int main()
{
sphere1 s;
cout<<"\n";
 sphere(2);
volume(4);
return 0;
}
