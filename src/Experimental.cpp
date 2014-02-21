
#include <iostream>
using namespace std;

#include "Binary.h"
#include "DifferentTestFunctions.h"
#include "ConstExpr.h"
#include "Casting.h"
#include "Maze.h"
#include "BitwiseSwap.h"


int main() {
	cout << "------------------\nExperimental start\n------------------" << endl;


	binaryTest();

	structureSize();

/*
	std::cout << "Number of lowercase letters in \"Hello, world!\" is ";

	constN<countlower("Hello, world!")> out2; // implicitly converted to conststr
*/
	castingTest();


	initMaze();
	findWayOut(maze[1][1], Door::empty);

	// bitwise swap
	int a = 194, b = 62;
	cout << a << " " << b << endl;
	bitwiseSwap(&a, &b);
	cout << a << " " << b << endl;


	cout << "---------------\nExperimental end\n----------------" << endl;
	return 0;
}
