/*
 * main.cpp
 *
 *  Created on: Nov 11, 2017
 *      Author: Zack White
 *     Purpose: driver file
 */

#include "DrunkTest.h"

int main() {
	sober test;
	bool drunk = false;

	int x;

	cout << "What sort of sobriety test do you want to take?\n"
		 << "\t1. logic\n" << "\t2. math\n" << "\t3. user information\n";
	cout << " \n> ";
	cin >> x;

	if (x == 1)
		drunk = test.logicPuzzle();
	else if (x == 2)
		drunk = test.mathPuzzle();
	else if (x == 3)
		drunk = test.userIDPuzzle();
	else cerr << "\nError, pick 1 2 or 3.\n";

	test.outputMessage(drunk);
}
