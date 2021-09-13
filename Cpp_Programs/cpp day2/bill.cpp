/*Q.5 Write a program to implement a telephone bill class with Name, Address,
Tel. No., No. of calls as data members. Compute the amount to be paid if the
charges per call is Rs. 2/-.*/

#include<iostream>
using namespace std;

class tel_bill
{
char name[50];
char address[50];
long int tel_no;
int calls;
 public:
void compute();

}

void tel_bill::compute()
{
int amount,call;
cout<<"enter total call";
cin>>amount;
amount=calls*2;
cout<<"amount to be paid is the:"<<amount;
}



int main()
{
tel_bill t;
t.compute();
return 0;
}

