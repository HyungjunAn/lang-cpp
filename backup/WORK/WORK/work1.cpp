// 1. 아래 클래스의 멤버 함수는 모두 비상수 멤버 함수 입니다.
//    상수함수로 변경해야 하는 찾아서 변경해 보세요

// 2. Rect 클래스를 Rect.h 와 Rect.cpp 로 분리해서 코드를 작성하세요

// 3. ptInRect() 함수의 구현부도 만들어 보세요

class Rect
{
	int xpos = 0;
	int ypos = 0;
	int width = 0;
	int height = 0;
public:
	Rect(int x = 0, int y = 0, int w = 0, int h = 0) : xpos(x), ypos(y), width(w), height(h){}

	int getArea() { return width * width; }
	int getWidth() { return width; }

	void move(int dx, int dy) { xpos += dx; ypos += dy; }
	
	// 사각형 안에 점(x, y) 이 있으면 true, 없으면 false  
	bool ptInRect(int x, int y)
	{
		// 구현부도 만들어 보세요
	}
};

int main()
{
	Rect r(0, 0, 100, 100);
	bool b = r.ptInRect(10, 20);
}

