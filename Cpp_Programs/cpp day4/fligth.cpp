/*Write a program to implement flight class with data member as flight no.,
source, destination and fare. Write a copy constructor and a member
function to display the flight information.*/
#include <iostream> 

 #include <string.h> 
 using namespace std;
 const int size=10; 
 class Airlines 
 { 
 public: 
 char flight_no[200]; 
 char source[200]; 
 char dest[200]; 
 int fare; 
 public: 
 Airlines( char* fl,char* s,char* d,int f) 
 { 
 strcpy(flight_no,fl); 
 strcpy( source,s); 
strcpy( dest,d); 
 fare=f; 
 } 
void describe() 
 { 
 cout<<"\n" ; 
cout<<"Flight Number :"<<flight_no; 
cout<<"\nSource : "<<source; 
 cout<<"\nDestination : "<<dest; 
 cout<<"\nFare : "<<fare; 
} 
 }; 
int main( ) 
{ 
                      
Airlines a1("R0011", "Delhi", "Mumbai" ,20000); 
Airlines a2("S0012", "Pune", "Kaismir" ,40000); 
a1.describe(); 
a2.describe(); 
return 0; 
 } 
 

