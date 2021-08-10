#include <iostream>
using namespace std;

class Point
{
	int x, y;
public:
	Point(int a, int b) :x(a), y(b) {}
};

// STL vector�� ������ ���ô�.
template<typename T> class Vector
{
	T* buff;
	int size;
public:
	Vector(int sz, T value = T() ) : size(sz)
	{
		//buff = new T[sz];  // T Ÿ���� sz ��ŭ �Ҵ�.

		// �޸𸮸� �Ҵ�
		buff = static_cast<T*>(operator new(sizeof(T)*sz));

		// ������ ȣ��
		for (int i = 0; i < sz; i++)
		{
			//new( &buff[i] ) T; // ����Ʈ ������ ȣ��
			new(&buff[i]) T(value); // �ᱹ, Point pt(pt1)�� ���
		}							// ��, ���� ������ ȣ��

	}				// new Point; // ����Ʈ ������
};					// new Point(1,1); // ���� 2�� ������
					// new Point(pt); 

int main()
{
	//Vector<int> v(10);
	Point pt(0, 0);
	Vector<Point> v(10, pt); // pt�� �����ؼ� ������ �ǹ�
}