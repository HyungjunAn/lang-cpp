#include <iostream>
using namespace std;

class Shape
{
public:
	virtual void Draw() = 0;
};

class Rect : public Shape
{
public:
	virtual void Draw() { cout << "Draw Rect" << endl; }
};

int main()
{
	void (Shape::*f)() = &Shape::Draw; // ??

	f();

}