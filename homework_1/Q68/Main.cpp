#include<string>
#include<algorithm>
#include<iostream>

using namespace std;

int main()
{
	string target="";
	long long n_code;
	cin >> n_code;
	string command;
	for (long long i = 0; i < n_code; i++)
	{
		cin >> command;

		if (command == "append")
		{
			string append_str;
			cin >> append_str;
			target += append_str;
		}
		else if (command == "replace")
		{
			string ab;
			string cd;
			cin >> ab;
			cin >> cd;
			auto pointer = target.find(ab);
			while (pointer != target.npos)
			{
				target.replace(pointer, ab.length(), cd);
				pointer = target.find(ab, pointer+cd.length());
			}
		}
		else if (command == "changecase")
		{
			string up_down;
			cin >> up_down;
			if (up_down == "up")
			{
				transform(target.begin(), target.end(), target.begin(), toupper);
			}
			else
			{
				transform(target.begin(), target.end(), target.begin(), tolower);
			}
		}
		else if (command == "reverse")
		{
			reverse(target.begin(), target.end());
		}
		else if (command == "length")
		{
			cout << target.length()<<endl;
		}
		else
		{
			cout << target<<endl;
		}
	}
}