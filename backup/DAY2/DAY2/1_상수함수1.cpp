// cafe.naver.com/cppmaster ����
// 2���� �����ҽ� �����ø� �˴ϴ�.














#include <iostream>
using namespace std;
// 16 page
class Point
{
public:
	int x = 0, y = 0;

	void set(int a, int b) { x = a; y = b; }

	void print()  const  // ��� ��� �Լ�
	{
		//x = 100; // error.  ��� ��� �Լ� �ȿ����� 
				  // ��� ����� ��� ��� �ȴ�.
		cout << x << " ," << y << endl; // ok..
	}
};

int main()
{
	const Point pt;  // ��� ��ü

	pt.x = 10;		// error. public �� ������ �����ü �̹Ƿ�
	pt.set(10, 20); // error. 
	pt.print();     // error.
			// ȣ�� �����ϰ� �Ϸ��� print()�� ��� ����Լ��� 
			// �ؾ� �Ѵ�

		// �ٽ� "�����ü�� ��� ����Լ��� ȣ�Ⱑ���ϴ�." - 17page

}


