#include<iostream>
#include<memory>
#include<math.h>
#include<vector>

using namespace std;

int main()
{
	long long n;
	long long m;
	long long sum = 0;
	cin >> n;
	cin >> m;

	vector<bool> num;

	for (long long a = 0; a <= m; a++)
	{
		if (a % 2 == 0){
			num.push_back(false);
		}
		else
		{
			num.push_back(true);
		}
	}
	num[2] = true;
	for (long long a = 3; a < sqrt(m); a++){
		if (num[a])
		{
			for (long long b = a * 2; b <= m; b += a)
			{
				num[b] = false;
			}
		}
	}


	for (long long a = n; a <= m; ++a)
	{

		if (num[a] && a != 1)
		{
			sum += a;
		}
	}
	cout << sum;
}

