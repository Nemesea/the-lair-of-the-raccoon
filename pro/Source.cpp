#include <iostream>
#include <conio.h>
using namespace std;

int main()
{
	int a[20][20], i, j, n, m, s, p;
	cout << "n=";
	cin >> n;
	cout << "m=";
	cin >> m;
	for (i = 0; i < n; i++)
	{
		s = 0;
		cout << "\nStroka " << i + 1 << "=";
		for (j = 0; j < m; j++)
		{
			cin >> a[i][j];
			s += a[i][j];
		}
		cout << "Summa=" << s << endl;
	}
	for (j = 0; j < m; j++)
	{
		p = 1;
		for (i = 0; i < n; i++)
			p *= a[i][j];
		cout << p << " ";
	}
	system("pause");
}