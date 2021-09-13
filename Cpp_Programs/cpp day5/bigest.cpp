/*Find out largest number between two numbers by implementing two

different classes as-
a. Number1-include n1 as variable and get_a(),disp_a() as

functions.
b. Number2-include n2 as variable and get_b(),disp_b() as
functions.
c. Create one common function as friend of both Number1 and
Number2 class.*/
#include<iostream>
using namespace std;
class biggest
{
private:
int a,b;
 public:
void get_data();
void display();
        
                
};
void biggest::get_data()
{
cout<<"Enter 2 Numbers";
cin>>a>>b;
}
void biggest::display()
{
 if(a>b)
cout<<"Biggest no.:"<<a;
else
cout<<"Biggest no.:"<<b;
}
int main()
{
biggest b;
b.get_data();
b.display();
        
}
