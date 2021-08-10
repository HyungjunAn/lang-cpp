// move9.cpp
#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main()
{
	string s1 = "hello";
	//string s2 = s1;
	string s2 = move(s1);

	cout << s1 << endl;
	cout << s2 << endl;

	vector<int> v1(10, 3);
	//vector<int> v2 = v1; // ±Ì¿∫ ∫πªÁ
	vector<int> v2 = move(v1);

	cout << v1.size() << endl;
	cout << v2.size() << endl;
}


