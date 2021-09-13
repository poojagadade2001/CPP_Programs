/*Area of Rectangle, Circle and Square.*/

#include<iostream>
using namespace std;
void area()
{
cout<<"\n no area defined ";
}
void area(int l,int b)
{
cout<<"\n area of rectangle";
}
void area(float ,int r)
{
cout<<"\n area of circle";
}
void area(double)
{
cout<<"\n area of square";
}
int main()
{
cout<<"\n";
area();
area(2,3);
area(3.14f,2);
area(2*2);
return 0;
}
