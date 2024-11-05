#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;
int main()
{

srand(time(0));
int randumnumber=rand()%100+1;
int usernumber;

cout<<"WELCOME TO THE GAME-GUESS THE NUMBER "<<endl;
cout<<"YOU HAVE TO ENTER NUMBERS BETWEEN 1-100 "<<endl;
cout<<"I AM THINKING OF A NUMBER ,CAN U GUESS IT??"<<endl;
cout<<"LETS BEGIN - GOOD LUCK!!"<<endl;
cout<<"*****************************"<<endl;

while(usernumber!=randumnumber)
{

cout<<"ENTER YOUR NUMBER"<<endl;
cin>>usernumber;

if(usernumber>randumnumber)
{
	cout<<"TOO HIGH NUMBER"<<endl;
	cout<<"*****************************"<<endl;
}
else if(usernumber<randumnumber)
{
	cout<<"TOO LOW NUMBER"<<endl;
	cout<<"*****************************"<<endl;
}
else
{
	cout<<"CONGRATULATIONS!! YOUR LUCK WORKED THIS TIME"<<endl;
	cout<<"*****************************"<<endl;
}
}
return 0;
}