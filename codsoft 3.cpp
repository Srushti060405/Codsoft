#include<iostream>
using namespace std;

char arr[3][3]={{'1','2','3'},{'4','5','6'},{'7','8','9'}};
int row ,column;
char token='x';
bool tie=false;
string name;
string name1;

void drawboard()
{
    cout << " " << arr[0][0] << " | " << arr[0][1] << " | " << arr[0][2] << endl;
    cout << "---|---|---" << endl;
    cout << " " << arr[1][0] << " | " << arr[1][1] << " | " << arr[1][2] << endl;
    cout << "---|---|---" << endl;
    cout << " " << arr[2][0] << " | " << arr[2][1] << " | " << arr[2][2] << endl;	
}
void getdata()
{
	int digit;
	if(token=='x')
	{
		cout<<name<<" "<<"please enter the digit where u wish to put cross mark"<<endl;
		cin>>digit;
		}	
		else if(token=='0')
	{
		cout<<name1<<" "<<"please enter the digit where u wish to put zero mark"<<endl;
		cin>>digit;
		}	
		if (digit >= 1 && digit <= 9) 
		{
        row = (digit - 1) / 3;
        column = (digit - 1) % 3;
    }
	else {
        cout << "INVALID CHOICE" << endl;
    }
    if(token=='x'&& arr[row][column]!='x'&& arr[row][column]!='0')
    {
    	arr[row][column]='x';
    	token='0';
	}
	else if(token=='0'&& arr[row][column]!='x'&& arr[row][column]!='0')
    {
    	arr[row][column]='0';
    	token='x';
	}
	else
	{
		cout<<"THERE IS NO EMPTY SPCACE"<<endl;
		getdata();
	}
}

bool checkwin()
{
	for(int i=0;i<=2;i++)
	{
		if(arr[i][0]==arr[i][1]&&arr[i][0]==arr[i][2]||arr[0][i]==arr[1][i]&&arr[0][i]==arr[2][i])
		return true;	
	}
	if ((arr[0][0] == arr[1][1] && arr[1][1] == arr[2][2]) || (arr[0][2] == arr[1][1] && arr[1][1] == arr[2][0])) 

	{
	return true;
	}
		tie = true;
	for(int i=0;i<3;i++)
	{
		for(int j=0;j<3;j++)
		{
			if(arr[i][j]!='x'&& arr[i][j]!='0')
			{
				tie=false;
				break;
			}
		}
		if (!tie) break; 
	}
    return false;
}
int main()
{	
char choice; 

    do {
        cout << "TIC TAC TOE GAME" << endl;
        cout << "***********************" << endl;

     
        arr[0][0] = '1'; arr[0][1] = '2'; arr[0][2] = '3';
        arr[1][0] = '4'; arr[1][1] = '5'; arr[1][2] = '6';
        arr[2][0] = '7'; arr[2][1] = '8'; arr[2][2] = '9';
        
        token = 'x'; 
        tie = false; 

        cout << "ENTER NAME OF THE FIRST PLAYER" << endl;
        cin >> name;
        cout << "ENTER NAME OF THE SECOND PLAYER" << endl;
        cin >> name1;
        cout << name << " is player 1 so they play first " << endl;
        cout << name1 << " is player 2 so they play second " << endl;

        while (!checkwin()&&!tie) {
            drawboard();
            getdata();
            checkwin();
        }
        
       
        if (tie) 
		{
    cout << "The game is a DRAW!" << endl;
} 
else
 {
    if (token == '0') {
        cout << name << " Wins!" << endl;
    } else {
        cout << name1 << " Wins!" << endl;
    }
}


        cout << "Do you want to play again? (y/n): ";
        cin >> choice;
        
    } while (choice == 'y' || choice == 'Y'); 

    cout << "Thank you for playing!" << endl;
    return 0;
}