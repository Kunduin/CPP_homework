/*
之前错误的将65题的内容写在了63题里，更改文件名之后无法重新创建63，之后为了
恢复了63的文件，不小心把64下的文件夹复制到了63中？？？？？所以可能要重写65了~~~~
*/

#include<iostream>
#include<string>
#include<vector>

using namespace std;

long long to10(string);
string to2(long long);

int main()
{
	vector<long long> vec;
	long long n;
	long long sum=0;
	cin >> n;
	for (long long i = 0; i < n; i++)
	{
		long long num;
		cin >> num;
		vec.push_back(num);
	}
	for (long long i = 0; i < n; i++)
	{
		sum += to10(to2(vec[i]));
	}
	cout << sum;

}

long long to10(string str)
{
	return (str[0] - 48) * 4 + (str[1] - 48) * 2 + (str[2] - 48);
}

string to2(long long num)
{
	string result = "";
	while (num != 0)
	{
		result = (char)(num % 2 + 48) + result;
		num/=2;
	}
	return result;
}