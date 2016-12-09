#include<iostream>
#include<conio.h>
using namespace std;
void main()
{
	int i, j = 0, n = 8, a[4] = { 0,1,2,4 }, b[4] = { 5,6,7,8 }, c[8];
	for (i = 0; i < n; i++)
	{
		if (i % 2 == 0) c[i] = a[j];
		else
		{
			c[i] = b[j];
			j++;
		}
	}
	for (i = 0; i < n; i++)
		cout << c[i];
	system("pause");
}