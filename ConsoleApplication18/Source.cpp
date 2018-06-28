#include <iostream>
#include <locale.h>

using namespace std;

int main()
{
	setlocale(LC_ALL, "rus");
	/*int x = 0;

	for (int i = 0; i < 5; i++)
	{

		x++;

		for (int j = 0; j < 8; j++)
		{
			if ((i ==0 || i==4) || (j==0 || j==7) ) cout << "*"; else cout << " ";
		}

		cout <<endl;

	}*/
	/*int i = 0, a, res=0, z;
	float avg;
	while (true)
	{
		i = 0;
		res = 0;

		cout << "a = ";
		cin >> a;

		do
		{
			res += a % 10;
			a = a / 10;
			i++;

		} while (a > 0);


		switch (z)
		{
		case 1: cout << res << endl; break;
		case 2: cout << a << endl; break;
		default:
			break;
		}
		cout << "i = " << i << endl;
		avg = res / i;
		cout << avg << endl;
	}*/
	/*int i = 1, j = 1, z, n, m, i1 = 1, j1 = 1;

	cin >> n;
	cin >> m;

	char x = '*', y = '-';
	cout << "количество символов = ";
	cin >> z;

	do
	{
		j++;


			do
			{
				i++;

				if ((j % 2 != 0 && i % 2 != 0) || (i == j) || (i % 2 == 0 && j % 2 == 0)) {
					j1 = 1;
					do
					{
						j1++;
						cout << x;
					} while (j1<=z);

				}
				else {

					j1 = 1;
					do
					{
						j1++;
						cout << y;
					} while (j1 <= z);
				}
			} while (i <= m);

		cout << endl;
		i = 1;

	} while (j <= n);*/
	//for (size_t i = 0; i < 256; i++)
	//{	
	//	cout << i << " " << char(i) << endl;
	//}

	/*int i = 0, a, res = 0, z, b=0;

	res = 0;

	cout << "a = ";
	cin >> a;

	do
	{
		b = b * 10 + a % 10;
		a = a / 10;

		i++;

	} while (a > 0);

	cout << b << endl;
	cout << b*5<<endl;*/


	/*int n;
	cout << "n= ";
	cin >> n;

	for (size_t i = 2; i <= n; i++)
	{
		if (n%i == 0) cout << i<<" ";
	}*/

	char c;
	
	int k = 0, x = 0, y = 0, z = 0;


	while (cin.get(c))
	{
		if (c == ' ') k++; else if (isalpha(c)) x++; else if (isdigit(c)) y++; else z++;
	}

	cout << "k = " << k << "\tx = " << x << "\ty = " << y << "\tother = " << z << endl;

	return (0);
}