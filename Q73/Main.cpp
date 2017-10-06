#include<iostream>
#include<string>
#include<algorithm>
#include<map>
#include<vector>

using namespace std;
void show(string,long);

vector<char> vec_2({ 'a', 'b', 'c' });
vector<char> vec_3({ 'd', 'e', 'f' });
vector<char> vec_4({ 'g', 'h', 'i' });
vector<char> vec_5({ 'j', 'k', 'l' });
vector<char> vec_6({ 'm', 'n', 'o' });
vector<char> vec_7({ 'p', 'q', 'r', 's' });
vector<char> vec_8({ 't', 'u', 'v' });
vector<char> vec_9({ 'w', 'x', 'y', 'z' });
map<char, vector<char>> my_map{ { '2', vec_2 }, { '3', vec_3 }, { '4', vec_4 }, { '5', vec_5 }, { '6', vec_6 }, { '7', vec_7 }, { '8', vec_8 }, { '9', vec_9 } };
long n=0;

int main()
{
	
	string input_nums;
	cin >> input_nums;
	n = input_nums.length();

	show(input_nums,0);
}

void show(string result, long pointer)
{
	if (pointer == n){
		cout << result << endl;
	}
	else
	{
		for (char e : my_map[result[pointer]])
		{
			string tmp = result;
			tmp[pointer] = e;
			show(tmp, pointer + 1);
		}
	}
}