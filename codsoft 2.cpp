#include<iostream>
using namespace std;
int main()
{
	double num,num1;
	int operations;
	cout<<"WELCOME TO THE BASIC CALCULATOR "<<endl;
	cout<<"BASIC CALCULATOR PERFORMS +,-,*,/ "<<endl;
	
	cout<<"ENTER THE FIRST NUMBER";
	cin>>num;
	cout<<"ENTER THE SECOND NUMBER";
	cin>>num1;
	
	cout<<"CHOOSE AN OPERATION TO BE PERFORMED"<<endl;
	cout<<"1. ADDITION(+)"<<endl;
	cout<<"2. SUBRACTION(-)"<<endl;
	cout<<"3. MULTIPLICATION(*)"<<endl;
	cout<<"4. DIVISION(/)"<<endl;
	cout<<"ENTER THE NUMBER (1,2,3,4) i.e WHICH OPERATION TO BE PERFORMED BY THE CALCULATOR"<<endl;
	cin>>operations;
	
	switch(operations)
	{
	
	case 1:
		cout<<num<<"+"<<num1<<"="<<num+num1<<endl;
			break;
	case 2:
		cout<<num<<"-"<<num1<<"="<<num-num1<<endl;
			break;
	case 3:
		cout<<num<<"*"<<num1<<"="<<num*num1<<endl;
			break;
	case 4:
		if(num1==0)
		{
			cout<<"division by zero not possible"<<endl;
		}
		else
		{
		
		cout<<num<<"/"<<num1<<"="<<num/num1<<endl;
		}
			break;
		
	}
return 0;
}