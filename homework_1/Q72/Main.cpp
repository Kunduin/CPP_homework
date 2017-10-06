#include<iostream>
#include<string>
#include<vector>

using namespace std;

int main()
{
	string roman;
	cin >> roman;
	vector<int> num;
	long long sum = 0;
	for (long long i = 0; i < roman.length(); i++)
	{
		switch (roman[i])
		{
		case'I':
			num.push_back(1);
			break;
		case'X':
			num.push_back(10);
			break;
		case'C':
			num.push_back(100);
			break;
		case'M':
			num.push_back(1000);
			break;
		case'V':
			num.push_back(5);
			break;
		case'L':
			num.push_back(50);
			break;
		case'D':
			num.push_back(500);
			break;
		default:
			break;
		}
	}
	for (long long i = 0; i < roman.length(); i++)
	{
		if ((num[i] == 1 || num[i] == 10 || num[i] == 100) && (i != num.size() - 1)&&num[i]<num[i+1])
		{
			sum -= num[i];
		}
		else
		{
			sum += num[i];
		}
	}
	cout << sum;
}