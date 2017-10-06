#include<iostream>
using namespace std;

int main(){
	long long a;
	cin >> a;
	long long b;
	cin >> b;
	long long result=1;
	for (long long i=0; i != b; ++i){
		result *= a;
	}
	cout << result;
}
