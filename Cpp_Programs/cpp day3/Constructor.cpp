//Create the following classes and write member functions and display proper
//information to user using constructor and destructor.
//a) Time b) Date c) Person d) Student e) Fan f) Point

#include<iostream>
using namespace std;
class Time{
public:
int hr;
int min;
int sec;

Time()
{
hr = 11;
min = 12;
sec =13;


}




 void showData()
 {
 cout<<hr<<":"<<min<<":"<<sec;
 }
};
 
 int main(){
 Time t;
 t.showData();

 }
