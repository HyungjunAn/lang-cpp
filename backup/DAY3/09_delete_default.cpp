// 186 page
int add(int a, int b)
{
	return a + b;
}

//double add(double a, double b);  // �ٽ�.. ���� �Ѵ�. ������ ����
							// �ǵ� : ���� ��ũ������ ������ 
							//      �ϰڴٴ� ��.

double add(double a, double b) = delete; // C++11 �Լ� ���� ����
								// ���� ������ �ð��� ����
int main()
{
	add(1, 2);

	add(3.4, 2.3);
}