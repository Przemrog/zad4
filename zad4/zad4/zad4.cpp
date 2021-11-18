#include <iostream>
#include <time.h>

using namespace std;

int main()
{

	//ZAD1


	/*


	int tab[10], x = 3;

	for (int i = 0; i < 10; i++)
	{
		tab[i] = x;
		cout << tab[i] << " ";
		x += 3;
	}
	*/


	//ZAD2 

	/*
	int tab[10], x = 3;

	for (int i = 0; i < 10; i++)
	{
		tab[i] = x;
		x += 3;
	}

	for (int i = 0; i < 10; i+=2)
	{
		cout << tab[i] << " ";
	}
	*/

	//ZAD3

	/*

	int tab[10], x = 0, a;

	cout << "Podaj a: ", cin >> a;
	cout << "\ntablica:\n";

	for (int i = 9; i >= 0; i--)
	{
		tab[i] = a - x;
		cout << tab[i] << " ";
		x += 5;
	}
	cout << "\ntalbica1: \n";
	for (int i = 0; i < 10; i++)
	{
		cout << tab[i] << " ";
	}


	*/

	//ZAD4

	/*

	int tab[10], x = 0, a;
	srand(time(NULL));

	cout << "\ntablica:\n";

	for (int i = 0; i < 10; i++)
	{
		tab[i] = rand() % 74 - 23;
	}

	int min = tab[0];

	for (int i = 0; i < 10; i++)
	{
		if (tab[i] < min) min = tab[i];
	}
	cout << min;

	*/

	//ZAD5


	/*
	int a, b;
	cout << "Podaj a: ", cin >> a;
	cout << "Podaj b: ", cin >> b;
	int tab[10] = { a,b };

	for (int i = 1; i < 10; i++)
	{
		tab[i] = b;
		b += a;
		a = b - a;
	}
	for (int i = 0; i < 10; i++)
	{
		cout << tab[i] << " ";
	}

	*/


	//ZAD6

	/*

	int tab[20] = { 1,2,3,4,5,6,7,8,9,10 };

	for (int i = 10; i < 20; i++)
	{
		tab[i] = tab[i-10];
	}
	for (int i = 0; i < 20; i++)
	{
		cout << tab[i] << " ";
	}


	*/

	//ZAD7


	/*
	
	int tab[3][3] = { 1,2,3,4,5,6,7,8,9 };

	int suma=0;

	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			if (i == j)
			{
				suma += tab[i][j];
				cout << suma;
			}
		}	
		cout << endl;
	}
	


	*/




	//ZAD8

	int tab1[3][3] = { 1,2,3,4,5,6,7,8,9 };
	int tab2[3][3] = { 9,8,7,6,5,4,3,2,1 };
	int tab3[3][3] = {};

	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
				
			tab3[i][j] = tab1[i][j] + tab2[i][j];

			}
	}	

	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {

			cout << tab3[i][j] << "\t";

		}
		cout << endl;
	}
		

}
