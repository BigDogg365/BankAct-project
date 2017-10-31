#include "CheckAct.h"
#include <iostream>
#include <string>
using namespace std;


CheckAct::CheckAct(string n, string t,  int Num, double b, double r, double minB, double schrg) : BankAct(n, t, Num, b)
{
	intrate = r;
	MinBal = minB;
	ServChrg = schrg;
	
}

CheckAct::CheckAct() : BankAct()
{
	intrate = 0.0;
	MinBal = 0.0;
	ServChrg = 0.0;
}


void CheckAct::setMinBal(double minB) { MinBal = minB; }
double CheckAct::getMinBal() { return MinBal; }

void CheckAct::setServChrg(double schrg) { ServChrg = schrg; }
double CheckAct::getServChrg() { return ServChrg; }

void CheckAct::setintrate(double r)	{	intrate = r;}
double CheckAct::getintrate()	{	return intrate;}

void CheckAct::Cprint()
{
	cout << MinBal << " " << ServChrg << " " << endl;
	//cout << name << " " << type << " " << actNum << " " << balance << " " << intrate << " " << endl;
}
//virtual void writeCheck(double amount) = 0;