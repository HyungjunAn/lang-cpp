#include <iostream>
#include <vector>
using namespace std;
/*
int main()
{
	vector<int> v(10, 0); // 10���� 0���� �ʱ�ȭ
	v.resize(7);

	cout << v.size() << endl;    // 7
	cout << v.capacity() << endl;// 10

	v.push_back(0);  // �Ѱ� �߰�.

	cout << v.size() << endl; // 8
	cout << v.capacity() << endl;// 10

	v.shrink_to_fit();

	cout << v.size() << endl; // 8
	cout << v.capacity() << endl;// 8


	v.push_back(0);  // �Ѱ� �߰�.

	cout << v.size() << endl; // 9
	cout << v.capacity() << endl;// �����Ϸ����� �ٸ�.
					//1.5�� �Ǵ� 2������

}
*/
// 31 page
class DBConnect
{
public:
	DBConnect()  { cout << "DB����" << endl; }
	~DBConnect() { cout << "DB�ݱ�" << endl; }
};
int main()
{
	vector<DBConnect> v(10);
	cout << "-----" << endl;

	v.resize(7); // �̼����� ���������� ������ ������
				// �پ�� 3���� ��ü�� ���� �޸𸮴� ��� �ֽ��ϴ�.
				// ������ �Ҹ��ڴ� ��������� ȣ���ؼ� DB�� �ݾƾ� �մϴ�.
	
	cout << "-----" << endl;

	v.resize(8);  // placement new ���...

	cout << "-----" << endl;
}


