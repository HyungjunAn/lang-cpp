#include <vector>
using namespace std;

// 45 page �̾߱�
// STL vector�� ����
// cppreference.com  ���� vector �˻�
template<typename T> class vector
{
public:
	typedef T            value_type;
	typedef unsigned int size_type;
};

int main()
{
	vector<int> v(10, 0);

    vector<int>::size_type sz = v.size(); //  ? �� � Ÿ���� ����ϸ� ���� ��� ?
				  // auto ����..
}