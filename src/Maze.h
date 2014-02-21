/*
 * Maze.h
 *
 *  Created on: Feb 21, 2014
 *      Author: goran
 */

#ifndef MAZE_H_
#define MAZE_H_

typedef char Doors;

enum Door {
	empty = 0x00,
	left = 0x01,
	right = 0x02,
	up = 0x04,
	down = 0x08,
};

struct Room {
	int x;
	int y;
	Doors d;
};

extern Room maze[3][3];
void initMaze();
void findWayOut(Room r, Door wayIn);

#endif /* MAZE_H_ */
