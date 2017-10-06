#include<iostream>
#include<string>

using namespace std;

int trans(char);
long long to10(string);
string to13(long long);



int main(){
	string command;
	string a;
	string b;
	cin >> command;
	cin >> a;
	cin >> b;
	if (command == "add"){
		cout << to13(to10(a) + to10(b))<<endl;
	}
	else if (command == "sub")
	{
		cout << to13(to10(a) - to10(b))<<endl;
	}
	else
	{
		cout << to13(to10(a)*to10(b))<<endl;
	}



}


long long to10(string str)
{
	long long sum=0;
	sum += trans(str[0]);

	for (long long i = 1; i < str.length(); i++)
	{
		sum*=13;
		sum += trans(str[i]);
	}
	return sum;
}

string to13(long long num)
{
	string result="";
	bool judge = true;

	if (num == 0)
	{
		result = "0";
		return result;
	}
	else if (num < 0)
	{
		num = -num;
		judge = false;
	}

	while (num!=0)
	{
		if (num % 13 < 10)
		{
			result = (char)(num % 13 + 48)+result;
		}
		else
		{
			result = (char)(num % 13 + 55)+result;
		}
		num /= 13;
	}
	if (judge)
	{
		return result;

	}
	else
	{
		return "-"+result;

	}
}




int trans(char a)
{
	switch (a)
	{
	case '0':
	case '1':
	case '2':
	case '3':
	case '4':
	case '5':
	case '6':
	case '7':
	case '8':
	case '9':
		return a-48;
		break;
	case 'a':
	case 'b':
	case 'c':
		return a-87;
		break;
	case 'A':
	case 'B':
	case 'C':
		return a-55;
		break;
	default:
		break;
	}
}