#include <iostream>
#include <string>
#include <cmath>
#include <ctime>
#include <iomanip>
using namespace std;


// ��� ������ � �������� �����
void printNumbers(int n, bool even)
{
    for (int i = even ? 0 : 1; i <= n; i += 2)
    {
        cout << i << " ";
    }
    cout << endl;
}

// ��� ����������� �����
const int N = 5;
int sum = 0;


int GetRowIndex()
{
    time_t rawtime;
    struct tm timeinfo;
    time(&rawtime);
    localtime_s(&timeinfo, &rawtime);
    int Day = timeinfo.tm_mday;
    return Day % N;
}

int main()
{
    // ��� ����������� ������ ��-������
    setlocale(LC_ALL, "Russian");

    // ��� ������ ����
    time_t now = time(0);
    tm localTime;
    localtime_s(&localTime, &now);

    // �� 15
    const int n = 10;

    cout << "׸���� �����: ";
    printNumbers(n, true);

    cout << "�������� �����: ";
    printNumbers(n, false);


    // �� 16
    int array[N][N];

    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            array[i][j] = i + j;
            std::cout << array[i][j] << " ";

            if (GetRowIndex() == i)
                sum += array[GetRowIndex()][j];
        }
        std::cout << "\n";
    }
    std::cout << "�������: " << localTime.tm_mday << "." << localTime.tm_mon + 1 << "." << localTime.tm_year + 1900 << endl;
    std::cout << "��� ������: " << GetRowIndex() << "\n";
    std::cout << "��� �����: " << sum << "\n";
}