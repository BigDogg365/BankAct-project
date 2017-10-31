#include "SavAct.h"
#include <iostream>
#include <string>
using namespace std;


SavAct::SavAct(string n, string t, int Num, double b, double r) : BankAct(n, t, Num, b)
{
	intrate = r;
}

SavAct::SavAct() : BankAct()
{
	intrate = 0.0;
}