#include <algorithm>
using namespace std;

// 285 page 
// cmp1, cmp2, Less, Greater ���� �ؿ�����
inline bool cmp1(int a, int b) { return a < b; }
inline bool cmp2(int a, int b) { return a > b; }
struct Less    { inline bool operator()(int a, int b) { return a < b; } };
struct Greater { inline bool operator()(int a, int b) { return a > b; } };

int main()
{
	int x[10] = { 1,3,5,7,9,2,4,6,8,10 };

	// C++ǥ���Լ��� sort�� �ֽ��ϴ�.
	sort(x, x + 10);  // �⺻ ������ ���� ����

	// STL�� sort()�� ��� ���ڴ� template �Դϴ�.

	// 1. �� ��å���� �Ϲ��Լ��� ����Ҷ�
	// ���� : ��å�� ��ü�ص� sort �Լ��� �Ѱ��̴�. �ڵ�޸� ��������.
	// ���� : ��å�Լ��� �ζ��� ġȯ�ɼ� ����. ������.
	sort(x, x+10, cmp1);//sort(int*,int*,bool(*)(int,int)) �� �Լ�����
	sort(x, x+10, cmp2);//sort(int*,int*,bool(*)(int,int)) �� �Լ�����




	// 2. �� ��å���� �Լ���ü�� ����Ҷ�
	// ���� : ��å �Լ��� �ζ��� ġȯ�ȴ� ������.
	// ���� : ��å�� ��ü�� Ƚ�� ��ŭ�� sort() ���� ����. 
	//        �ڵ� �޸�����
	Less    f1;
	Greater f2;
	sort(x, x+10, f1);// sort(int*, int*, Less) �� �Լ� ����
	sort(x, x+10, f2);// sort(int*, int*, Greater) �� �Լ� ����
}






