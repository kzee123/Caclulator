#include<iostream>
#include<conio.h>
#include<windows.h>
#include<cctype>
#include<cmath>

int fac(int x)
{

int i;
int F=1;

for (i = 1; i <= x; i++)
	F*=i;

	return F;
}

int sum(int x,int y)
{
	return x + y;
}

int pro(int x, int y)
{
	return x*y;
}

int sub(int x, int y)
{
	return x-y;
}

float divide(float x, float y)
{
	return x/y;
}
using namespace std;
void gotoxy(int x, int y) { 
    COORD pos = {x, y};
    HANDLE output = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleCursorPosition(output, pos);
}
void loading()
{
	system("color 0c");
	cout<<"\n\n\n\t\t  Loading\n\n";
	char a='_', b=221;
	cout<<"\t\t";
	cout << "Please wait: " << endl << endl <<"\t   ";
	for (int i=0;i<=20;i++)
	cout << a;
	cout << endl;
	cout << "\t";
	for (int i=0;i<=23;i++)
	cout<<a;
	cout << "|";
	cout<<"\r" << "\t   ";
 	for (int i=0;i<=20;i++)
 	{
 	 cout<<b;
 	 for (int j=0;j<=100000000;j++);
 	}

 	system("cls");
}

void calstruc()
{
	system("color 0b");
	int x = 0;
	char c = 223;
	for(int i = 0 ;i < 12 ; i++)
	{
		cout << " _" ;
	}
	cout << endl;
	
	for(int i = 0;i < 10;i++)
	{
		if(i <4)
		{
			cout << "|                       |"<< endl;
		}
		
		else
		{
			cout << "|-----------------------|" << endl;
			cout << "|sin|cos|tan| ^ |sqr|log|"<< endl ;
			cout << "|-----------------------|" << endl;
			cout << "|  ^2 | ^3  | pow |  /  |" << endl;
			cout << "|-----------------------|" << endl;
			cout << "|  1  |  2  |  3  |  4  |" << endl;
			cout << "|  5  |  6  |  7  |  8  |"<< endl ;
			cout << "|  9  |  0  |  +  |  -  |"<<endl;
			cout << "|  %  |  !  |  *  |  /  |" << endl;
			cout << "|_______________________|" << endl;
			cout << "|________compute________|" << endl;
			cout << "|_______________________|" << endl;
			break;
			
			
		}
		
	}
	
}

void cal()
{
	int as,bs;
	char oper;
	char choice;
	gotoxy(1,1);
	cout << "1 = ( +, -, *, / )" << endl;
	cout << "|2 = trignometric func" << endl;
	cout << "|3 = pow function" << endl;
	cout << "|4 = ! or % : ";
	cin >> choice;
	string fun;
	int val;
	system("cls");
	calstruc();
	if(choice == '1')
	{
	
	gotoxy(1,1);
	cin >> as;
	gotoxy(1,2);
	//cout << "      ";
	
	//gotoxy(1,3);
	cin >>oper;
	gotoxy(1,3);
	//cout << "       ";
	
	//gotoxy(10,4);
	cin >> bs;
	gotoxy(10,4);
	cout << "      ";
	gotoxy(1,4);
	cout << "Ans =";
	gotoxy(6,4);
	if(oper == '+')
	{
		system("cls");
		calstruc();
		gotoxy(1,1);
		cout <<sum(as,bs);
	}
	else if(oper == '-')
	{
		system("cls");
		calstruc();
		gotoxy(1,1);
		cout << sub(as,bs);
	}
	
	else if(oper == '*')
	{
		system("cls");
		calstruc();
		gotoxy(1,1);
		cout << pro(as,bs);
	}
	
	else if(oper == '/')
	{
		system("cls");
		calstruc();
		gotoxy(1,1);
		cout << divide(as,bs);
	}
	
	else{
		system("cls");
		calstruc();
		gotoxy(1,1);
		cout << "wrong operator " << endl;
		}
	
	}
	
	else if(choice == '2')
	{
		gotoxy(1,1);
		cin >> fun;
		gotoxy(1,2);
		cin >> val;
		if(fun == "sin")
		{
			system("cls");
			calstruc();
			gotoxy(1,1);
			cout << sin(val);
		}
		if(fun == "tan")
		{
			system("cls");
			calstruc();
			gotoxy(1,1);
			cout << tan(val);
		}
		
		if(fun == "cos")
		{
			system("cls");
			calstruc();
			gotoxy(1,1);
			cout << cos(val);
		}
		
		if(fun == "log")
		{
			system("cls");
			calstruc();
			gotoxy(1,1);
			cout << log(val);
		}
		
		if(fun == "sqrt")
		{
			system("cls");
			calstruc();
			gotoxy(1,1);
			cout << sqrt(val);
		}
		
		if(fun == "")
		{
			system("cls");
			calstruc();
			gotoxy(1,1);
			cout << sin(val);
		}
	}
	
	else if(choice == '3')
	{
		string powchoice;
		gotoxy(1,1);
		int value;
		cout <<"2 ,3 or pow: " << endl;
		gotoxy(1,2);
		cin >>powchoice;

		if(powchoice == "2")
		{
			system("cls");
			calstruc();
			gotoxy(1,1);
			cout << "value: ";
			cin >> value;
			system("cls");
			calstruc();
			gotoxy(1,1);
			cout << value*value;
		}
		
		if(powchoice == "3")
		{
			system("cls");
			calstruc();
			gotoxy(1,1);
			cout << "value: ";
			cin >> value;
			system("cls");
			calstruc();
			gotoxy(1,1);
			cout << value*value*value;
		}
		
		if(powchoice == "pow")
		{
			int power;
			system("cls");
			calstruc();
			gotoxy(1,1);
			cout << "value: ";
			cin >> value;
			gotoxy(1,2);
			cout << "power: ";
			cin >> power;
			system("cls");
			calstruc();
			gotoxy(1,1);
			cout << pow(value,power);
		}
		
		
		
		
	}
	
	else if(choice == '4')
	{
		char f;
		int vall;
		gotoxy(1,1);
		cout << "! or %: ";
		cin >>f;
		gotoxy(1,2);
		cout << "value: ";
		cin >> vall;
		if(f == '!')
		{
			system("cls");
			calstruc();
			gotoxy(1,1);
			cout << fac(vall);
		}
	}
	gotoxy(1,20);
	
}



int main()
{
	loading();
	calstruc();
	cal();
	return 1;
}                                        
