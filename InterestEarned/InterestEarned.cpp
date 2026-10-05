#include <iostream>
#include <cmath>
using namespace std;

//This program calculates the balance in a savings account after one year using compund interest

//User inputs
double principal;
double ratePercent;
double timesCompounded;

//Calculation variables
double rateDecimal;
double finalAmount;
double interest;

int main() {

	cout << "Enter the principal" << endl;
	cin >> principal;
	cin.ignore();

	cout << "Enter the annual interest rate %" << endl;
	cin >> ratePercent;
	cin.ignore();

	cout << "Enter the number of times interest is compunded in a year" << endl;
	cin >> timesCompounded;

	rateDecimal = ratePercent / 100.0;
	finalAmount = principal * pow(1 + (rateDecimal / timesCompounded), timesCompounded);
	interest = finalAmount - principal;

	cout << endl << "For a principal of $" << principal << " at an interest rate of " << ratePercent << "%, the final amount in the savings account will be $" << finalAmount << " and $" << interest << " total interest earned." << endl;


	return 0;
}