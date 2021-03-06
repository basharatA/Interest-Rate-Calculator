// Compound Interest Rate.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <cstdio>
#include<cstdlib>
#include<iostream>
#include <math.h>
#include<cmath>

#include<stdlib.h> 

using namespace std;

int main()
{
	cout << "Compound Interest Rate Calculator";
	cout << "\n";
	cout << "\n";
	// enter the Rate in percentage
	float percent;

	float principal;
	cout << "Enter The Principal Amount:(P)";
	cin >> principal;
	cout << "Enter The Annual Rate In Percentage:(r)";
	cin >> percent;
	float rate;
	rate = percent / 100;
	// compounds per year
	int compounds;
	
	cout << "Enter Compunds per Year(1 to 365):";
	cin >> compounds;
	// enter the time period in months
	int period;
	cout << "Enter Number of Years:";
	cin >> period;
	// calculate earnings
	float earning;
	int nt = compounds * period;
	float rn = rate / compounds;
	earning = principal * pow((1 + rn), nt);
	// output the results (followed by a NewLine)
	float profit = earning - principal;
	cout << "Total earning at the end of term:";
	cout << earning << endl;
	cout << "Total profit at the end of term:";
	cout << profit << endl;

	//cout << "\n";
	//cout << rate << endl;
	//cout << period << endl;
	//cout << principal << endl;

	// wait until user is ready before terminating program
	// to allow the user to see the program results
	system("PAUSE");
	return 0;


}
