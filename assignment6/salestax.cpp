/*
Joseph Braun
Assignment 6 Sales Tax Calculator
01/21/19
*/

# include <iostream> // C++ 
# include <iomanip> //setw(), setprecision()
# include <conio.h> //_getch()
using namespace std;

# define TRUE	1
# define FALSE	0

const unsigned char dollarSign = (char)36;
const unsigned char plusSign = (char)43;
const unsigned char minusSign = (char)45;
const unsigned char pipeSign = (char)124;
const unsigned char percentSymbol = (char)37;

int main() {
	cout << fixed;
	cout << setw(3) << plusSign
		<< minusSign << minusSign << minusSign << minusSign << minusSign << minusSign << minusSign
		<< minusSign << minusSign << minusSign << minusSign << minusSign << minusSign << minusSign
		<< minusSign << minusSign << minusSign << minusSign << minusSign << minusSign << plusSign << endl;
	cout << setw(3) << pipeSign << setw(2) << "SALES TAX CALCULATOR" << setw(1) << pipeSign << endl;
	cout << setw(3) << plusSign
		<< minusSign << minusSign << minusSign << minusSign << minusSign << minusSign << minusSign
		<< minusSign << minusSign << minusSign << minusSign << minusSign << minusSign << minusSign
		<< minusSign << minusSign << minusSign << minusSign << minusSign << minusSign << plusSign << endl;

	double itemCost;
	cout << setw(3) << "Instructions: PLease enter an item cost" << endl;
	cout << setw(7) << "and select a state from the list." << endl << endl;
	
	cout << "How much is the item you would like to purchase: " << dollarSign;
	while (!(cin >> itemCost)) {
		if (cin.fail())
		cin.clear();
		cin.ignore(1000000000, '\n');
		cout << "Please enter the price for the item you would like to purchase: "
			<< dollarSign;
	}
	cout << endl;
	cout << "Please select a state from the following list:" << endl;
	cout << "1.) Maryland" << endl;
	cout << "2.) Virginia" << endl;
	cout << "3.) North Carolina" << endl;
	cout << "4.) South Carolina" << endl;
	cout << "5.) Deleware" << endl;
	cout << "6.) District of Columbia" << endl;
	cout << "7.) Pennsylvania" << endl;

	int state;
	
	
	cout << "In which state is the purchase being made: ";
	cin >> state;
	cout << endl;


	if (state == 1) {
		double taxRate;
		taxRate = 0.06;
		char stateName[30] = "Maryland";
		double salesTax = itemCost * taxRate;
		double totalCost = itemCost + salesTax;
		double taxpercent = taxRate * 100;
		
		cout << "--------------------------------------------------" << endl;
		cout << "Original Purchase Price : " << dollarSign << setprecision(2) << itemCost << endl;
		cout << "Tax Rate                : " << taxpercent << percentSymbol << endl;
		cout << "Sales Tax               : " << dollarSign << setprecision(2) << salesTax << endl;
		cout << "Total Cost              : " << dollarSign << setprecision(2) << totalCost << endl;
		cout << "In " << stateName << " an item that costs " << dollarSign << itemCost << " will cost " << dollarSign << totalCost <<
			" with sales tax included." << endl;
	}
	
	if (state == 2) {
		double taxRate;
		taxRate = 0.0563;
		char stateName[30] = "Virginia";
		double salesTax = itemCost * taxRate;
		double totalCost = itemCost + salesTax;
		double taxpercent = taxRate * 100;

		cout << "--------------------------------------------------" << endl;
		cout << "Original Purchase Price : " << dollarSign << setprecision(2) << itemCost << endl;
		cout << "Tax Rate                : " << taxpercent << percentSymbol << endl;
		cout << "Sales Tax               : " << dollarSign << setprecision(2) << salesTax << endl;
		cout << "Total Cost              : " << dollarSign << setprecision(2) << totalCost << endl;
		cout << "In " << stateName << " an item that costs " << dollarSign << itemCost << " will cost " << dollarSign << totalCost <<
			" with sales tax included." << endl;
	}
	
	if (state == 3) {
		double taxRate;
		taxRate = 0.0695;
		char stateName[30] = "North Carolina";
		double salesTax = itemCost * taxRate;
		double totalCost = itemCost + salesTax;
		double taxpercent = taxRate * 100;

		cout << "--------------------------------------------------" << endl;
		cout << "Original Purchase Price : " << dollarSign << setprecision(2) << itemCost << endl;
		cout << "Tax Rate                : " << taxpercent << percentSymbol << endl;
		cout << "Sales Tax               : " << dollarSign << setprecision(2) << salesTax << endl;
		cout << "Total Cost              : " << dollarSign << setprecision(2) << totalCost << endl;
		cout << "In " << stateName << " an item that costs " << dollarSign << itemCost << " will cost " << dollarSign << totalCost <<
			" with sales tax included." << endl;
	}

	if (state == 4) {
		double taxRate;
		taxRate = 0.0737;
		char stateName[30] = "South Carolina";
		double salesTax = itemCost * taxRate;
		double totalCost = itemCost + salesTax;
		double taxpercent = taxRate * 100;

		cout << "--------------------------------------------------" << endl;
		cout << "Original Purchase Price : " << dollarSign << setprecision(2) << itemCost << endl;
		cout << "Tax Rate                : " << taxpercent << percentSymbol << endl;
		cout << "Sales Tax               : " << dollarSign << setprecision(2) << salesTax << endl;
		cout << "Total Cost              : " << dollarSign << setprecision(2) << totalCost << endl;
		cout << "In " << stateName << " an item that costs " << dollarSign << itemCost << " will cost " << dollarSign << totalCost <<
			" with sales tax included." << endl;
	}

	if (state == 5) {
		double taxRate;
		taxRate = 0.0;
		char stateName[30] = "Deleware";
		double salesTax = itemCost * taxRate;
		double totalCost = itemCost + salesTax;
		double taxpercent = taxRate * 100;

		cout << "--------------------------------------------------" << endl;
		cout << "Original Purchase Price : " << dollarSign << setprecision(2) << itemCost << endl;
		cout << "Tax Rate                : " << taxpercent << percentSymbol << endl;
		cout << "Sales Tax               : " << dollarSign << setprecision(2) << salesTax << endl;
		cout << "Total Cost              : " << dollarSign << setprecision(2) << totalCost << endl;
		cout << "In " << stateName << " an item that costs " << dollarSign << itemCost << " will cost " << dollarSign << totalCost <<
			" with sales tax included." << endl;
	}

	if (state == 6) {
		double taxRate;
		taxRate = 0.0575;
		char stateName[30] = "District of Columbia";
		double salesTax = itemCost * taxRate;
		double totalCost = itemCost + salesTax;
		double taxpercent = taxRate * 100;

		cout << "--------------------------------------------------" << endl;
		cout << "Original Purchase Price : " << dollarSign << setprecision(2) << itemCost << endl;
		cout << "Tax Rate                : " << taxpercent << percentSymbol << endl;
		cout << "Sales Tax               : " << dollarSign << setprecision(2) << salesTax << endl;
		cout << "Total Cost              : " << dollarSign << setprecision(2) << totalCost << endl;
		cout << "In " << stateName << " an item that costs " << dollarSign << itemCost << " will cost " << dollarSign << totalCost <<
			" with sales tax included." << endl;
	}

	if (state == 7) {
		double taxRate;
		taxRate = 0.0634;
		char stateName[30] = "Pennsylvania";
		double salesTax = itemCost * taxRate;
		double totalCost = itemCost + salesTax;
		double taxpercent = taxRate * 100;

		cout << "--------------------------------------------------" << endl;
		cout << "Original Purchase Price : " << dollarSign << setprecision(2) << itemCost << endl;
		cout << "Tax Rate                : " << taxpercent << percentSymbol << endl;
		cout << "Sales Tax               : " << dollarSign << setprecision(2) << salesTax << endl;
		cout << "Total Cost              : " << dollarSign << setprecision(2) << totalCost << endl;
		cout << "In " << stateName << " an item that costs " << dollarSign << itemCost << " will cost " << dollarSign << totalCost <<
			" with sales tax included." << endl;
	}
	

	while (cin.fail() == TRUE || state < 1 || state > 7) {


		if (cin.fail() == TRUE) {
			cout << "That wasn't a valid input. " << endl;
			cin.clear();
			cin.ignore(100000000,'\n'),
			rewind(stdin);
		}
		cout << "please enter a number between 1 and 7:";
		cin >> state;
	}
	


	_getch();
	return 0;
}

