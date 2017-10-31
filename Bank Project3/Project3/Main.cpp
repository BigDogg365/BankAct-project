#include <iostream>
#include "BankAct.h"
#include "CheckAct.h"
#include "SavAct.h"
#include <string>
#include <cstdlib>

using namespace std;

//////////////////////////  Object of program /////////////////////////////////
//(1) create a new account
//(2) deposit to or withdraw from account
//(3) show an account
//(4) list all acounts
////////////////////////////////////////////////////////////////////////////
void Cprint();
void displayMenu();
void addAccount(CheckAct[], int n);
void accessAccount(CheckAct[], int);
void DisplayAll(CheckAct[], int);
void deposit(CheckAct[], int);
void withdraw(CheckAct[], int);
void checkbalance(CheckAct[], int);
void postint(CheckAct[], double);

int main()
{
	CheckAct account[10];
	bool flag = true;

	char userin;
	int counter = 0;
	do {
		displayMenu();
		cin >> userin;
		switch (userin)
		{
		case '1':
			addAccount(account, counter);
			counter++;
			break;
		case '2':
			deposit(account, counter);
			break;
		case '3':
			withdraw(account, counter);
			break;
		case '4':
			checkbalance(account, counter);
			break;
		case '5':
			DisplayAll(account, counter);
			break;
		case '6': flag = false;
		default:cout << "Invalid Choice!!";
		}

	} while (flag);
}

void displayMenu()
{
	cout << "\n Please Select from the following options\n";
	cout << "\n1.Add New Account\n2.Make a Deposit\n3.Make a Withdraw\n4.Check Balance\n5.Display All accounts\n6.Exit\n";
}

void addAccount(CheckAct account[], int counter)
{
	string newname;
	string newtype;
	double newbalance;
	double newintrate;
	double newminbal;
	double newservchrg;

	cout << "\nPlease enter Account Name: ";
	cin >> newname;
	cout << "Please enter Account Type:\n 'C' for checking or 'S' for savings: ";
	cin >> newtype;
	cout << "Please enter Account Balance: ";
	cin >> newbalance;
	cout << "Please enter Interest Rate %: ";
	cin >> newintrate;
	int id = rand() % 100 + 1900;
	if (newtype._Equal("c") || newtype._Equal("C"))
	{
		newtype = "c"; 
		cout << "Please enter Minimun Balance: ";
		cin >> newminbal;
		cout << "Please enter Service Charge: ";
		cin >> newservchrg;

		CheckAct chk1(newname, newtype, id, newbalance, newintrate, newminbal, newservchrg);
		//cout << "Checking" << endl;
		//newtype = "Checking";
		//chk1.Cprint();
		account[counter] = chk1;
	}
	else
	{
		newtype = "s";
		/*SavAct Sav1(newname, newtype, id, newbalance, newintrate);
		cout << "Savings" << endl;
		newtype = "Savings";
		account[counter] = Sav1;*/

	}
	
	cout << "\nAccount Name: " << account[counter].getname() << "\n"
		<< "Account Type: " << account[counter].gettype() << "\n"
		<< "Account #: " << account[counter].getactNum() << "\n"
		<< "Balance: $" << account[counter].getbalance() << "\n"
		<< "Interest Rate: " << account[counter].getintrate() << "\n";
	if (newtype == "c")
	{
	cout << "Minimum Balance: " << account[counter].getMinBal() << "\n"
			<< "Service Charge: " << account[counter].getServChrg() << "\n";
		/*BankAct* holder = &account[counter];
		CheckAct* current = dynamic_cast<CheckAct*>(holder);
		cout << "Minimun Balance:  " << current->getMinBal() << "\n"
		<< " Service Charge: " << current->getServChrg() << "\n";*/
	}

}

void deposit(CheckAct account[], int counter)
{
int searchnumber = 0;
double curramt = 0;
double depamt = 0;
double newbal = 0;
int currid = 0;
bool hat = true;
cout << "Which Account # would you like to access?: ";
cin >> searchnumber;
for (int i = 0; i <= counter; i++)
{
	if (account[i].getactNum() == searchnumber)
	{
		cout << "\nAccount Name :" << account[i].getname() << "\n"
			<< "current Balance: $" << account[i].getbalance() << "\n";
		curramt = account[i].getbalance();
		currid = i;
		hat = false;
		break;
	}
}
if (hat) cout << " that account does not exist";
else
{
cout << "currid= " << currid << "\n";
cout << "how much would you like to deposit?: "; cin >> depamt;
newbal = curramt + depamt;
account[currid].setbalance(newbal);
cout << "New balance is: " << account[currid].getbalance();
}
}

void withdraw(CheckAct account[], int counter)
{
	int searchnumber = 0;
	double curramt = 0;
	double widamt = 0;
	double newbal = 0;
	int currid = 0;
	bool hat = true;
	cout << "Which Account # would you like to access?: ";
	cin >> searchnumber;
	for (int i = 0; i <= counter; i++)
	{
		if (account[i].getactNum() == searchnumber)
		{
			cout << "\nAccount Name :" << account[i].getname() << "\n"
				<< "current Balance: $" << account[i].getbalance() << "\n";
			curramt = account[i].getbalance();
			currid = i;
			hat = false;
		}
	}
	if (hat) cout << " that account does not exist";
	else
	{
		cout << "currid= " << currid << "\n";
		cout << "how much would you like to withdraw?: "; 
		cin >> widamt;
		newbal = curramt - widamt;
		account[currid].setbalance(newbal);
		cout << "New balance is: " << account[currid].getbalance();
	}
}
void checkbalance(CheckAct account[], int counter)
{
	accessAccount(account, counter);
}

void accessAccount(CheckAct account[], int counter)
{
	int searchnumber = 0;
	double curramt = 0;
	bool hat = true;
	cout << "Which Account # would you like to access?: ";
	cin >> searchnumber;
	for (int i = 0; i <= counter; i++)
	{
		if (account[i].getactNum() == searchnumber)
		{
			cout << "\nAccount Name :" << account[i].getname() << "\n"
				<< "current Balance: $" << account[i].getbalance() << "\n";
			curramt = account[i].getbalance();
			hat = false;
		}
	}
	if (hat) cout << " that account does not exist";

}


void DisplayAll(CheckAct account[], int currentnumaccount)
{
	for (int i = 0; i<currentnumaccount; i++)
		cout << "Name " << account[i].getname() << "\n"
		<< "Type " << account[i].gettype() << "\n"
		<< "actNum " << account[i].getactNum() << "\n"
		<< "balance " << account[i].getbalance() << "\n"
		<< "intRate " << account[i].getintrate() << "\n\n";

}


