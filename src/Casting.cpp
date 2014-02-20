/*
 * Casting.cpp
 *
 *  Created on: Jan 26, 2014
 *      Author: goran
 */

#include "Casting.h"
#include <iostream>

using namespace std;

class A
{};

class B
{
public:
	B() {cout << "B::B()" << endl;};
	B(const A&) {cout << "B::B(const A&)" << endl;};
	B& operator = (const A& a) {cout << "B& operator = (const A& a)" << endl; return *this;}
	operator A() { cout << "operator A()" << endl; return A();}
};


class Dummy {
    double i,j;
};

class Addition {
    int x,y;
  public:
    Addition (int a, int b) { x=a; y=b; }
    int result() { return x+y;}
};


void wrongCasting(B )
{
}

class Base { virtual void dummy() {} };
class Derived: public Base { int a; };

void castingTest()
{

	A a;
	B b = a;
	b = a;
	a = b;

	wrongCasting(a);

/*
    Dummy d;
    Addition * padd;
    padd = (Addition*) &d;
    cout << padd->result();
*/

    try {
        Base * pba = new Derived;
        Base * pbb = new Base;
        Derived *pd;
        Base *pb;


        pb = dynamic_cast<Base*>(pbb);
        if (pb==0) cout << "Null pointer on zero type-cast.\n";

        pd = dynamic_cast<Derived*>(pba);
        if (pd==0) cout << "Null pointer on first type-cast.\n";

        pd = dynamic_cast<Derived*>(pbb);
        if (pd==0) cout << "Null pointer on second type-cast.\n";

        pbb = dynamic_cast<Base*>(pba);
        if (pbb==0) cout << "Null pointer on third type-cast.\n";

        pd = dynamic_cast<Derived*>(pbb);
        if (pd==0) cout << "Null pointer on forth type-cast.\n";

        Base &pbr = dynamic_cast<Base&>(*pd);

        delete pba;
        delete pb;

      } catch (exception& e) {cout << "Exception: " << e.what();}

      Base *pb = new Base();
      Derived *pd = static_cast<Derived*>(pb);
      if (pd==0) cout << "Null pointer on static_cast type-cast.\n";

      pd = dynamic_cast<Derived*>(pb);
      if (pd==0) cout << "Null pointer on dynamic_cast after static_cast type-cast.\n";

      Dummy *pDummy =  dynamic_cast<Dummy*>(pb);
      Base &pb1 = static_cast<Base&>(*pb);

      delete pb;
}

