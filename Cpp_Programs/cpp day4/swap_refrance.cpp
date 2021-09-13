//Q.2 Swap two numbers using reference variable. Create class Swap.
#include<iostream>
using namespace std;
void swap(int &num1,int &num2)
{
    int temp;
    temp =num1;
    num1 = num2;
    num2 = temp;

}
int main()
{
    int a=5,b=10;
    cout<<"\n before swapping\n"<<a<<" "<<b;
    swap(a,b);
    cout<<"\n After swapping\n"<<a<<" "<<b;
    return 0;
}
