#include <iostream>
using namespace std;
int main()
{
	int x;
	cout << "Podaj Liczbe" << endl;
	cin >> x;

	if (x > 0)
	{
		cout << "Liczba jest dodatnia" << endl;
	}
	if (x == 0)
	{
		cout << "Liczba jest rowna 0" << endl;
	}
	if (x < 0)
	{
		cout << "liczna jest ujemna" << endl;

	}
	return(0);
}