#include <iostream>

using namespace std;

#pragma pack (2)

void structureSize()
{
	struct Foo{
	    short b;
	    int a;
	    char  c;
	};

	cout << "* structureSize() --------------" << endl;
	cout << sizeof(Foo) << endl;

}
