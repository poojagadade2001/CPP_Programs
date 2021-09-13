/*Demonstrate function overloading for addition of two integer and two
floating point numbers.*/

#include<iostream>
using namespace std;
class add()
{
public:
int add(int a,intb);

{
cout<<"addition of two integer number";
}
 
float(float a,float b);
{
cout<<"addition of two flaoting point numbers";
}
};
int main()
{
add a;
a.add(2,3);
a.add(2.3f,3.4f);
return 0;


}
