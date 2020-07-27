//============================================================================
// Name        : cpp-arithmetic-shift.cpp
// Author      : Tobias Gion
// Version     :
// Copyright   : 
// Description : Practice sheet LB3 from KT / Use of the shift operators
//============================================================================

#include <iostream>
using namespace std;

int main() {


	cout << "//==============================================================================" << endl;
	cout << "// Aufgabe 1" << endl;
	cout << "//==============================================================================" << endl;

	// Init integer i with 5 * 4 using shift operator
	int i = 5 << 2;

	// Init integer j with 10 / 2 using shift operator
	int j = 10 >> 1;

	// Print to stdout
	cout << "5 * 4:" << "\t" << "5 << 2 = " << i << "\n";
	cout << "10 / 2:" << '\t' << "10 >> 1 = " << j << '\n';

	return 0;
}
