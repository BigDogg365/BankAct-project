#ifndef CheckAct_H
#define CheckAct_H
#include "BankAct.h"
#include <string>
using namespace std;

class CheckAct : public BankAct 
{
public:
	CheckAct(string n, string t, int Num, double b, double r, double minB, double schrg); // : BankAct(n, t, Num, b, r) {}
	CheckAct();
	//~CheckAct();
	void setMinBal(double);
	double getMinBal();

	void setServChrg(double);
	double getServChrg();
	void Cprint();

protected:

	double MinBal;
	double ServChrg;

};

#endif