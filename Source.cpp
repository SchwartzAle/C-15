#include <iostream>
using namespace std;


void printNumbers(int n, bool even)
{
	for (int i = even ? 0 : 1; i <= n; i += 2)
	{
		cout << i << "";
	}
	cout << endl;
}

int main()
{
	//����������� ������ �� ������
	setlocale(LC_ALL, "Russian");


	const int n = 10;

	cout << "׸���� �����:";
	printNumbers(n, true);

	cout << "�������� �����:";
	printNumbers(n, false);

	return 0;
}