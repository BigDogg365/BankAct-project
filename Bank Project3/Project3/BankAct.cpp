#include "BankAct.h"
#include <iostream>
#include <string>
using namespace std;


BankAct::BankAct(string n, string t, int Num, double b)
{
	name = n;
	type = t;
	actNum = Num;
	balance = b;
	
}

BankAct::BankAct()
{
	name = "None";
	type = "C/S";
	actNum = 0;
	balance = 0.0;
}


void BankAct::setname(string n) { 	name = n; }
string BankAct::getname() { 	return name; }

void BankAct::settype(string t) {	type = t;}
string BankAct::gettype()		{	return type;}

void BankAct::setactNum(int Num){	actNum = Num;}
int BankAct::getactNum()		{	return actNum;}

void BankAct::setbalance(double b)	{	balance = b;}
double BankAct::getbalance()	{	return balance;}

//void BankAct::setintrate(double r)	{	intrate = r;}
//double BankAct::getintrate()	{	return intrate;}

void BankAct::print()
{	cout << name << " " << type << " " << actNum << " " << balance << " " <<  " " << endl;
}


