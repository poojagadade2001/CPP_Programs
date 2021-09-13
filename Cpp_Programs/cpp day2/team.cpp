/*Create a class Team as follows with following data members such as,
Accept 5 different records in array and display the records as followsCountry
Country    Player   Matches   Age  BattingAvg   BallingAvg
India      Sachin   295       30   45.51        53.00
Australia  Ricky    160       28   41.00        67.00 */


#include<iostream>
using namespace std;
class Team{
public:
int country;
int player;
int matches;
int age;
float battingAvg;
float ballingAvg;

void get_Data(){
cout<<"enter the value of country player matches age battingAvg and  ballingAvg";
cin>>country>>player>>matches>>age>>battingAvg>>ballingAvg;
}
void show_Data(){
cout<<" Country "<<country<<" Player "<<player<<" matches "<<matches<<
" age "<<age<<" battingAvg" <<battingAvg<<" ballingAvg "<<ballingAvg;
}

};

int main()
{
int i =1;
 Team m[5];
for(i=1;i>=5;i++)
{
 m[i].get_Data();
 m[i].show_Data();
 
 }
 return 0;
 }

