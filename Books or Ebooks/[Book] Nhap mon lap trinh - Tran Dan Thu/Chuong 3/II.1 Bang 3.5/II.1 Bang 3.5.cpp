#include <iostream>
using namespace std;
int main()
{
	int a, b, vmax, vmin;
	cout << " a = ";
	cin >> a;
	cout << " b = ";
	cin >> b;
	vmin = a; vmax = b;
	if (a > b)
	{
		vmin = b;
		vmax = a;
	}
	cout << "Max = " << vmax << endl;
	cout << "Min = " << vmin << endl << endl;
	
	system("pause");
	return 1;
}