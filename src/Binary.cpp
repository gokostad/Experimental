/*
 * Binary.cpp
 *
 *  Created on: Dec 5, 2013
 *      Author: goran
 */

#include <iostream>
#include <bitset>
using namespace std;

template<typename T>
void printBinary(T i)
{
	for (int n = sizeof(i)*8; n > 0; n--)
		cout << n % 10;
	cout << endl;
	cout << bitset<sizeof(i)*8>(i);
	cout << endl;
}

void binaryTest()
{
	int i = 0x01;

	cout << "* binaryTest() --------------" << endl;
	cout << i << endl;
	printBinary(i);
	cout << ~i << endl;
	printBinary(~i);

	i <<= sizeof(int)*8-1;
	cout << i << endl;

	printBinary(i);

	printBinary(~i);
}

