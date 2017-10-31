#ifndef SavAct_H
#define SavAct_H
#include "BankAct.h"
#include <string>
using namespace std;

class SavAct : public BankAct
{
public:
	SavAct(string n, string t, int Num, double b, double r);
	SavAct();
	void setintrate(double);
	double getintrate();
	void postInt(double);

	/*~SavAct();*/
	/*double getInterestRate();
	void setInterestRate(double rate);*/

protected:
	double intrate;
	
};

#endif