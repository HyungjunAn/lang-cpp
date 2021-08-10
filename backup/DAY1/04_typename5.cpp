#include <vector>
using namespace std;

// 45 page 이야기
// STL vector의 원리
// cppreference.com  에서 vector 검색
template<typename T> class vector
{
public:
	typedef T            value_type;
	typedef unsigned int size_type;
};

int main()
{
	vector<int> v(10, 0);

    vector<int>::size_type sz = v.size(); //  ? 에 어떤 타입을 사용하면 좋을 까요 ?
				  // auto 제외..
}