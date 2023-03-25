#include <iostream>
using namespace std;
int calc(int n)
{
	int sum = 0;
	if (n == 1)
		return 1;
	else
	{
		for (int i = 0; i < n; i++)
			sum += calc(i);
	}
	return n * sum;
}
int main()
{
	int n;
	cout << "Nhap mot so bat ky";
	cin >> n;
	cout << calc(n);
	return 0;
}