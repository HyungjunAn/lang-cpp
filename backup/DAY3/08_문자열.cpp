#include <string>
#include <iostream>
using namespace std;

// 185
int main()
{
	//string s1 = "C:\\aa\\bb\\cc"; // "\\" ���� ǥ�����̳� ���丮 ǥ���� �θ� ���

	// Raw String : "\" �� Ư�� ���ڿ��� �ƴ� �Ϲ� ���ڿ��� ���
	// ���� ��ū : "(
	string s1 = R"(C:\aa\bb\cc)";

	cout << s1 << endl;

	// " ǥ���ϰ� �ʹٸ� : �׳� ������ �ȴ�.
	string s2 = R"(C:\aa\b"b\cc)";

	// )" �� ǥ���ϰ� �ʹٸ� : �����ϴ� ��ū�� �����Ҽ� �ִ�
	string s3 = R"***(C:\aa\b)"b\cc)***";

	// char8_t : c++20 ����.
	const char8_t* s = u8R"***(C:\aa\b)"b\cc)***";
}







