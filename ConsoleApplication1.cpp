#include <iostream>
#include <cstdlib>


using namespace std;

int main()
{
	setlocale(0, "RUS");

	while (true)
	{
		int num;
		cout << "Введите номер лабораторно работы которую хотите запустить: \n";
		cin >> num;

		switch (num) {
		case 1:
		{
			system("LABA1.exe");
			break;
		}
		case 2:
		{
			system("LABA2.exe");
			break;
		}
		case 3:
		{
			system("LABA3.exe");
			break;
		}
		default:
			break;
		}
	}
	return 0;
}
