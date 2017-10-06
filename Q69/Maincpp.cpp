#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

int main()
{
	int n;
	string num;
	int max=1;
	cin >> n;
	cin >> num;
	if (num.length() <= 0)
	{
		return 0;
	}

	for (int i = 0; i < n; i++)
	{
		auto pointer = num.rfind(num[i]);
		while (pointer > i)
		{
			string sub_reverse = num.substr(i,pointer+1);
			reverse(sub_reverse.begin(), sub_reverse.end());
			if (sub_reverse == num.substr(i, pointer+1))
			{
				if (sub_reverse.length() > max)
				{
					max = sub_reverse.length();
				}

				break;
			}
			pointer = num.rfind(num[i], pointer-1);
		}
	}
	cout << max;
}