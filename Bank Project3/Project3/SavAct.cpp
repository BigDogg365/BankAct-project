#include "SavAct.h"
#include <iostream>
#include <string>
using namespace std;


SavAct::SavAct(string n, int Num, double b, double r) : BankAct(n, "s", Num, b, r)
{
	
}

SavAct::SavAct() : BankAct()
{
	
}