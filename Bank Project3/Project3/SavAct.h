#ifndef SavAct_H
#define SavAct_H
#include "BankAct.h"
#include <string>
using namespace std;

class SavAct : public BankAct
{
public:
	SavAct(string n, int Num, double b, double r);
	SavAct();
	/*~SavAct();*/
	/*double getInterestRate();
	void setInterestRate(double rate);*/

protected:
	void postInt(double);
};

#endif