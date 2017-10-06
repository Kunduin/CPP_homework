#include <iostream>
using namespace std;
long long sum(long long);

int main(){
	long long n; 
	cin >> n;
	for (long long i = 1;  ; i++)
	{
		if (n > sum(i - 1) && n <= sum(i))
		{
			if (i%2==0)
			{
				cout << n - sum(i - 1) << "/" << i - n + sum(i - 1)+1;
			}
			else
			{
				cout << i - n + sum(i - 1)+1 << "/" << n - sum(i - 1);
			}
			break;
		}
	}

}

long long sum(long long n)
{
	return (n*(n + 1)) / 2;
}