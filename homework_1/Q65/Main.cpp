/*
֮ǰ����Ľ�65�������д����63��������ļ���֮���޷����´���63��֮��Ϊ��
�ָ���63���ļ�����С�İ�64�µ��ļ��и��Ƶ���63�У������������Կ���Ҫ��д65��~~~~
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