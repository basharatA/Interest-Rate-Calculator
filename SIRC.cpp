// ConsoleApplication1.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <cstdio>
#include<cstdlib>
#include<iostream>
#include <math.h>
using namespace std;

int main()
{
	cout << "Simple Interest Rate Calculator";
	cout << "\n";
	cout << "\n";
	cout << "You need Interest Rate, Time period in months, Principal amount";
	cout << "\n";
	cout << "Your results will be total interest rate for time period";
	cout << "\n";
	cout << "\n";

	// enter the Rate in percentage
	float percent;

	cout << "Enter The Rate In Percentage:";
	cin >> percent;
	double rate;
	rate = percent / 100;
	// enter the time period in months
	int period;
	int mon;
	float loan_period;
	cout << "Enter Number of Months:";
	cin >> period;
	mon = 12;
	loan_period = (float)period / mon;
	float loanperiod = roundf(loan_period * 100) / 100;
	// enter the Principal amount
	float principal;
	cout << "Enter The Principal Amount:";
	cin >> principal;
	// calculate Interest
	float interest;
	interest = rate * loanperiod * principal;
	// output the results (followed by a NewLine)
	cout << "Interest value is:";
	cout << interest << endl;
	cout << "\n";
	//cout << rate << endl;
	//cout << loanperiod << endl;
	//cout << principal << endl;

	// wait until user is ready before terminating program
	// to allow the user to see the program results
	system("PAUSE");
	return 0;


}

