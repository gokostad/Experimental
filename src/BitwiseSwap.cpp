//============================================================================
// Name        : BitwiseSwap.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include "BitwiseSwap.h"

void bitwiseSwap(int *a, int *b)
{
	for (unsigned int i = 0, t = 0x01; i < sizeof(int)*8; i++, t <<= 1)
	{
		if ( (*a & t) && !(*b & t) )
		{
			*a &= ~t;
			*b |= t;
		}
		else if ( !(*a & t) && (*b & t) )
		{
			*a |= t;
			*b &= ~t;
		}
	}
}

