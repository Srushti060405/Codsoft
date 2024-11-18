#include<iostream>
#include<string>
using namespace std;

const int MaxCount=10;
string tasks[MaxCount];
bool completed[MaxCount];
int taskcount=0;
void addtask()
{
	if(taskcount<MaxCount)
	{
		cout<<"ENTER THE TASK DESCRIPTION TO BE DONE"<<endl;
		
		cin.ignore();
		getline(cin,tasks[taskcount]);
		
		
		completed[taskcount]=false;
		++taskcount;
		cout<<"ADDED SUCCESFULLY"<<endl;
	}
	else
	{
		cout<<"TASKS LISTS IS FULL FOR THE DAY!!"<<endl;
	}
}
void viewtask()
{
	if(taskcount==0)
	{
		cout<<"NO TASKS TO SHOW FOR TODAY,ENJOY!!"<<endl;
	}
	else
	
	
	{
		cout<<"TO DO TASKS FOR THE DAY!!"<<endl;
		for(int i=0;i<taskcount;++i)
		{
			cout<<(i+1)<<"."<<tasks[i]<<"[";
			if(completed[i])
			{
				cout<<"completed] \n";
			}
			else
			{
				cout<<"pending]"<<endl;
			}
			
		}
	}
}
void marktask()
{
	int index;
	cout<<"ENTER THE TASK TO BE MARKED AS COMPLETE(1-" << taskcount << ")"<<endl;
	cin>>index;
	if(index>0&&index<=taskcount)
	{
		completed[index-1]=true;
		cout<<"TASK MARKED COMPLETE"<<endl;
	}
	else
	{
		cout<<"INVALID CHOICE"<<endl;
	}
}
void deletetask()
{
	int index;
	cout<<"ENETER THE  TASK NO. TO BE DELETED (1-" << taskcount << "):"<<endl;
	cin>>index;
	if(index>0&&index<=taskcount)
	{
		for(int i=index-1;i<taskcount-1;i++)
		{
			tasks[i]=tasks[i+1];
			completed[i]=completed[i+1];
		}
		taskcount--;
		cout<<"DELETED SUCCESSFULLY!!"<<endl;
	}
	else
	{
		cout<<"INVALID CHOICE!!"<<endl;
	}
	
}

int main()
{
	int choice;
	do{
		cout<<"1.ADD TASKS"<<endl;
		cout<<"2.VIEW TASKS"<<endl;
		cout<<"3.MARK TASKS"<<endl;
		cout<<"4.DELETE TASKS"<<endl;
		cout<<"5.EXIT"<<endl;
		cout<<"ENTER THE CHOICE";
		cin>>choice;
		
		switch(choice)
		{
			case 1:addtask();
			break;
			case 2:viewtask();
			break;
			case 3:marktask();
			break;
			case 4:deletetask();
			break;
			case 5:
			cout<<"done tasks for the day"<<endl;
			break;
			default:
				cout<<"INVALID CHOICE"<<endl;
				}
			}
		while(choice!=5);
		return 0;
}