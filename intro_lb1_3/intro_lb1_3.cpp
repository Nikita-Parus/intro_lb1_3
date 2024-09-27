#include <iostream>

using namespace std;

int main()
{
	setlocale(0, ".1251");
	int a;
	cout << "Введiть а:" << endl;
	cin >> a;

	cout << "а початкове:" << endl;
	cout << a << endl;
	a++;
	cout << "а пiсля постфiксної iнкрементацiї:" << endl;
	cout << a << endl;
	++a;
	cout << "а пiсля префiксної iнкрементацiї:" << endl;
	cout << a << endl;
	a--;
	cout << "а пiсля постфiксної декрементацiї:" << endl;
	cout << a << endl;
	--a;
	cout << "а пiсля префiксної декрементацiї:" << endl;
	cout << a << endl;
}
