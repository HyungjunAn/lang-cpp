#include <iostream>
using namespace std;

int g = 0;

int main()
{
	int v1 = 10;
	int v2 = 10;

	auto f1 = [&v1, &v2 ](int a) { return a + v1; }; // 


	// capture variable by reference
}








