#include <iostream>
using namespace std;

int main()
{
	int n;
	int sum = 0;
	cout << "請輸入一個正整數n:";
	cin >> n;

	//for loop
	for (int i = 1; i <= n; i++)
	{
		if (i % 2 == 0) sum += i;
	}

	for (int i = 2; i <= n; i += 2)
	{
		sum += i;
	}

	//while
	int i = 1;
	sum = 0;
	while (i <= n)
	{
		if (1 % 2 == 0)sum += i;
		i++;
	}

	//do while
	do {
		sum = 0;
		i += 2;
	} while (i <= n);

	cout << "1~" << n << "之間所有偶數的何為:" << sum << endl;


}