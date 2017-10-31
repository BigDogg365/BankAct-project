#ifndef CheckAct_H
#define CheckAct_H
#include "BankAct.h"
#include <string>
using namespace std;

class CheckAct : public BankAct 
{
public:
	CheckAct(string n, string t, int Num, double b, double r, double minB, double schrg); // : BankAct(n, t, Num, b) {}
	CheckAct();
	//~CheckAct();
	void setMinBal(double);
	void setServChrg(double);
	void setintrate(double);
	double getMinBal();
	double getServChrg();
	double getintrate();
	void Cprint();

protected:
	double intrate;
	double MinBal;
	double ServChrg;

};

#endif