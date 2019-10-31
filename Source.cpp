#include <iostream>
#include <conio.h>
#define Spasi " "

using namespace std;

int main()
{
	int n, f_n, f_n1, f_n2;
	cout << "-----------------------" << endl;
	cout << "DERET FIBONACCI" << endl;
	cout << "-----------------------" << endl;
	cout << "Masukkan Nilai Ke-n: "; cin >> n;

	f_n1 = 1;
	f_n2 = 0;

	cout << f_n2 << Spasi;
	cout << f_n1 << Spasi;

	for (int i = 1; i < n; i++)
	{
		f_n = f_n1 + f_n2;
		f_n2 = f_n1;
		f_n1 = f_n;

		cout << f_n << Spasi;
	}

	_getch();
	return 0;
}
