#include <stdio.h>
#include <iostream>
#include <stdlib.h>
#include <math.h>

using namespace std;
//查找素数函数
int checkPrimeNumber(int totalNum)
{
	int i, j;
	for (i = 2; i <= totalNum; i++)
	{
		int k = 0;
		for (j = 2; j < i/2; j++)
		{
			if (i%j == 0)
				k++;
		}
		if (k == 0)
		{
			cout << "the number is  " << i << endl;
		}
	}
	return 0;
}

int checkPrimeNumberup(int totalNum)
{
	int i, j, m;
	for (i = 2; i <= totalNum; i++)
	{
		m = int(sqrt(double(i)));  //根号内要double类型
		for (j = 2; j <= m; j++)
		{
			if (i%j == 0)
				break;
		}
		if (j>m)
		{
			cout << "the number is  " << i << endl;
		}
	}
	return 0;
}
int main()
{
	checkPrimeNumberup(100);
	return 0;
}