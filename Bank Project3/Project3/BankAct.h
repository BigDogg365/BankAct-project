#ifndef BANKACT_H
#define BANKACT_H
#include <string>

using namespace std;

class BankAct				// Define the class bankAccount to implement the basic properties of a Bank Account.
{
protected:					// An object of this class should store the following data :
	string name;			// Account holder’s name(string),
	string type;			// Account Type (string, checking / saving),
	int actNum;			   // Account Number(int)
	double balance;			// Balance(double)
	//double intrate;			// Interest Rate(double). -Store interest rate as a decimal number.

public:
	BankAct(string, string, int, double);
	BankAct();				// default constructor
	virtual ~BankAct() = default;
	string getname();
	string gettype();
	int getactNum();
	double getbalance();
	//double getintrate();
	void setname(string);
	void settype(string);
	void setactNum(int);
	void setbalance(double);
	//void setintrate(double);
	void print();
};
//class CheckAct : public BankAct
//{
//public:
//	CheckAct(string n, int acctNum, double bal);
//
//	virtual void writeCheck(double amount) = 0;
//};

#endif