// 5_move4_3.cpp
#include <iostream>
#include <string>
#include <vector>
#include <memory>
using namespace std;

// 자원관리는 자원 관리 객체에게
// 복사 계열의 함수와 move 계열의 함수를 만들지 않아도 된다.
// Rule Of 0 
class Cat
{
	//char* name;
	string name;
	//int* buff;
	vector<int> buff;

	//int* resoure;
	shared_ptr<int> resource;
public:
};


int main()
{

}

