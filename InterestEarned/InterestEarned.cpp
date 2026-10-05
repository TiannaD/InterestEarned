#include <iostream>
#include <cmath>
using namespace std;

double principal;
double ratePercent;
double timesCompounded;

double rateDecimal;
double interestRate;
double interestEarned;
double finalAmount;
double interest;

int main() {

	//cin >> principal;
	//cin.ignore();
	cin >> ratePercent;
	//cin.ignore();
	//cin >> timesCompounded;

	rateDecimal = ratePercent / 100.0;
	finalAmount = principal * pow(1 + (rateDecimal / timesCompounded), timesCompounded);
	interest = finalAmount - principal;

	cout << ratePercent/100.0;


	return 0;
}