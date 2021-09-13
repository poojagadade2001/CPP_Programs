//WAP using exception handling if in the division the denominator is negative.
#include <iostream>
using namespace std;
int division(int numerator, int denominator) 
{
if( denominator == 0 ) 
{
throw "Division by zero condition!";
}
return (numerator / denominator );
}
int main () 
{

try 
{
int result = division(20, 0);
cout<<"The dividend of the numbers is: "<<result<<endl;
}
catch (const char* message) 
{
cerr<< message;
}
return 0;
}
