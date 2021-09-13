/*Swap two integer numbers and two characters using function
overloading.*/

#include<iostream>
using namespace std;
void swap(int& a,int& b)
{
 int t;
 t=a;
 a=b;
 b=t;
 }
 int main()
 {
 int x=10,y=20;
 cout<<"\n before swapping x="<<x<<"y="<<y;
 
 swap(x,y);
 
 cout<<"\n after swapping x="<<x<<"y="<<y;
 }
