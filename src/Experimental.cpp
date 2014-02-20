
#include <iostream>
using namespace std;

#include "Binary.h"
#include "DifferentTestFunctions.h"
#include "ConstExpr.h"
#include "Casting.h"

int main() {
	cout << "------------------\nExperimental start\n------------------" << endl;


	binaryTest();

	structureSize();

/*
	std::cout << "Number of lowercase letters in \"Hello, world!\" is ";

	constN<countlower("Hello, world!")> out2; // implicitly converted to conststr
*/
	castingTest();

	cout << "---------------\nExperimental end\n----------------" << endl;
	return 0;
}
