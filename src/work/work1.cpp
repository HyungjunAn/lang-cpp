// 1. �Ʒ� Ŭ������ ��� �Լ��� ��� ���� ��� �Լ� �Դϴ�.
//    ����Լ��� �����ؾ� �ϴ� ã�Ƽ� ������ ������

// 2. Rect Ŭ������ Rect.h �� Rect.cpp �� �и��ؼ� �ڵ带 �ۼ��ϼ���

// 3. ptInRect() �Լ��� �����ε� ����� ������

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
	
	// �簢�� �ȿ� ��(x, y) �� ������ true, ������ false  
	bool ptInRect(int x, int y)
	{
		// �����ε� ����� ������
	}
};

int main()
{
	Rect r(0, 0, 100, 100);
	bool b = r.ptInRect(10, 20);
}

