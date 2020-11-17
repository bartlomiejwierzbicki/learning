#include <iostream>

using namespace std;

int main()
{
	int N = 20;
	int T[N];
	int temp = 1;
	for (int i = 0; i <= N; i++)
	{
		T[i] = (5 - abs(5 - temp));
		if (temp == 9)
		{
			temp = 1;
		}
		temp++;
	}

	for (int i = 0; i <= N; i++)
	{
		cout << T[i] << " ";
	}
}
