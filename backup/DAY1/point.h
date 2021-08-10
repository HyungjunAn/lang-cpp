// Point.h
#pragma once
#include "cppmaster.h"

class Point
{
public:
	int x = 0;
	int y = 0;

	// constructor & destructor
	Point() { LOG_FUNCTION_NAME(); }
	Point(int a, int b) { LOG_FUNCTION_NAME(); }
	~Point() { LOG_FUNCTION_NAME(); }

	// copy constructor & copy assignment
	Point(const Point&) { LOG_FUNCTION_NAME(); }
	void operator=(const Point&) { LOG_FUNCTION_NAME(); }

#ifdef LOG_MOVE
	// move constructor & move assignment
	Point(Point&&)          { LOG_FUNCTION_NAME(); }
	void operator=(Point&&) { LOG_FUNCTION_NAME(); }
#endif
};

