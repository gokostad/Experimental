/*
 * Maze.cpp
 *
 *  Created on: Feb 21, 2014
 *      Author: goran
 *
 *  Finding the way out of Maze (collection of two dimension rooms with doors on some or all sides.
 */
#include <iostream>
using namespace std;

#include "Maze.h"

Room maze[3][3];
/*
 * initialize maze. xy coordinate base, low down corner if first
 * 20 21 22
 * 10 11 12
 * 00 01 02
 *
 * 00 0000000000
 * 0   0       0
 * 00 0000000 00
 * 0   0       0
 * 00 0000000 00
 * 0           0
 * 0000000000000
 */

void initMaze()
{
	maze[0][0] = {0, 0, Door::right | Door::up};
	maze[1][0] = {1, 0, Door::left | Door::right};
	maze[2][0] = {2, 0, Door::left | Door::up};
	maze[0][1] = {0, 1, Door::up | Door::down};
	maze[1][1] = {1, 1, Door::right};
	maze[2][1] = {2, 1, Door::up | Door::down};
	maze[0][2] = {0, 2, Door::up | Door::down};
	maze[1][2] = {1, 2, Door::right};
	maze[2][2] = {2, 2, Door::left | Door::down};
}

void findWayOut(Room r, Door wayIn)
{
	// we are out
	cout << r.x << "," << r.y << " " << endl;

	if ((r.d & Door::left) && wayIn != Door::right)
	{
		if (r.x == 0)
		{
			// we are out
			cout << "---- OUT: " << r.x-1 << "," << r.y << " " << endl;
		}
		else
		{
			findWayOut( maze[r.x-1][r.y], Door::left );
		}
	}
	if ((r.d & Door::right) && wayIn != Door::left)
	{
		if (r.x == 2)
		{
			// we are out
			cout << "---- OUT: " << r.x+1 << "," << r.y << " " << endl;
		}
		else
		{
			findWayOut( maze[r.x+1][r.y], Door::right );
		}
	}
	if ((r.d & Door::up) && wayIn != Door::down)
	{
		if (r.y == 2)
		{
			// we are out
			cout << "---- OUT: " << r.x << "," << r.y+1 << " " << endl;
		}
		else
		{
			findWayOut( maze[r.x][r.y+1], Door::up );
		}
	}
	if ((r.d & Door::down) && wayIn != Door::up)
	{
		if (r.y == 0)
		{
			// we are out
			cout << "---- OUT: " << r.x << "," << r.y-1 << " " << endl;
		}
		else
		{
			findWayOut( maze[r.x][r.y-1], Door::down );
		}
	}

}





