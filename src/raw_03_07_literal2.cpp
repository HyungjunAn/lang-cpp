#include <iostream>
#include <string>
#include <complex>
#include <chrono>
using namespace std;
using namespace std::chrono;

void foo(string s) { cout << "string" << endl; }      // 1
void foo(const char* s)  { cout << "char*" << endl; } // 2

int main()
{
	foo("hello");  // 2
	foo("hello"s); // 1  operator""s( const char*)

	seconds s = 1h + 2min + 30s;

	cout << s.count() << endl;
}









