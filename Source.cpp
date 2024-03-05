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
	//возможность писать по русски
	setlocale(LC_ALL, "Russian");


	const int n = 10;

	cout << "Чётные числа:";
	printNumbers(n, true);

	cout << "Нечётные числа:";
	printNumbers(n, false);

	return 0;
}