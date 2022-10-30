//Peterson Number or Not
#include <iostream>
using namespace std;
int fact[10]
	= { 1, 1, 2, 6, 24, 120, 720, 5040, 40320, 362880 };
bool ptrsn(int x)
{
	int num = x, sum = 0;
	while (x > 0) {
		int digit = x % 10;
		sum += fact[digit];
		x = x / 10;
	}
	return (sum == num); //Condition checking
}
int main()
{
	int x;
	cout << "Enter any number: ";
	cin >> x ;
	if (ptrsn(x))
		cout << "It's a Peterson Number.";
	else
		cout << "Not a Peterson Number.";
	return 0;
}
