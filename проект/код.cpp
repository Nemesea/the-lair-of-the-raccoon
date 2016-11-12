#include <iostream>
#include <conio.h>
using namespace std;

void main()
{
	float a[20], sum = 0, max = 0;
	int i, n;
	cout << "Vvedite n:";
	cin >> n;
	cout << "Vvedite elementi:";
	for (int i = 0; i < n; i++) {
		cin >> a[i];
		sum += a[i];
	}
	for (int i = 0; i < n; i++)
		if (max < a[i]) max = a[i];
	cout << "summa=" << sum << "\nSrAr=" << sum / n << "\nMax=" << max << endl;
	system("pause");
}