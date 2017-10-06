# include<iostream>
using namespace std;


int main(){
	long long n;
	cin >> n;
	if (n < 2)
	{
		cout << n;
	}
	else{
		long long a = 0;
		long long b = 1;
		long long c = 1;
		for (long long i = 2; i != n; ++i)
		{
			a = b;
			b = c;
			c = a + b;

		}
		cout << c;
		
	}
	
}
