#include <iostream>
using namespace std;
int fib(int n)
{
	int gg[n + 1];
	if (n <= 1)
	{
		gg[0] = 0;
		gg[1] = 1;
		return gg[n];
	}
	else
	{
		for (int i = 2; i <= n; i++)
			gg[i] = gg[i - 1] + gg[i - 2];
		return gg[n + 1];
	}
}
int main()
{
	int n;
	cin >> n;
	cout << fib(n);
	return 0;
}