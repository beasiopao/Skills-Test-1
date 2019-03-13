#include <iostream>
#include <conio.h>
using namespace std;

int main()
{
	double pay, hours, payrate, netincome1, netincome2, netincome3, taxes, clothes, school, savings, Psavings;

	cout << "Enter your pay rate for an hour: ";
	cin >> pay;
	cout << "Enter the number of hours you worked per week: ";
	cin >> hours;

	//calculations
	payrate = pay*hours;
	taxes = payrate*0.14;
	netincome1 = payrate - taxes;
	clothes = netincome1*0.10;
	school = netincome1*0.1;
	netincome2 = netincome1 - (clothes + school);
	savings = netincome2*0.25;
	Psavings = savings*0.50;



	cout << "\nIncome Before taxes from summer job: " << payrate << endl;
	
	cout << "\nIncome After taxes from summer job: " << netincome1 << endl;
	
	cout << "\nMoney spent on clothes and accessories: " << clothes << endl;
	
	cout << "\nMoney spent on school supplies: " << school << endl;
	
	cout<< "\nMoney spent to buy saving bonds: " << savings << endl;

	cout<< "\nMoney your parents spend to buy additional savings bonds for you: " << Psavings << endl;

	_getch();
	return 0;
}